#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/log/trivial.hpp>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include "Functions.h"
#include "logger.h"
#include "logger.h"
#include "Functions.h"
#include <sys/resource.h>
#include <sys/time.h>

struct rusage  r_usage;

using namespace std;

auto start = std::chrono::high_resolution_clock::now();



int iceberg = 10;





//attributes
string  att_height, att_length, att_area, att_eccen,att_pblack,att_pand, att_meantr,att_blackpix,att_blackand,att_wbtrans;
int  height_index, length_index, area_index, eccen_index, pblack_index,meantr_index,blackpix_index,blackand_index,wbtrans_index,pand_index;



int main(){


	INFOLOG("Start Star Cubing Algorithm\n");


	map<string, map<string, int> > freq_table;
	map<string, string>  star_table;
	map<string, string>  temperature_star_table;
	map<string, string>  pm_value_star_table;
	vector<vector<string> > csv_data;
	map<string, int>::iterator innerit;
	CsvReader reader;
	StarTable startable;


	csv_data = reader.read_csv(freq_table);


	if(csv_data.size() == 0){
		ERRORLOG("Error in input reading. Data size zero\n");
		return 0;
	}

	INFOLOG("Number of tuples : %d\n", (int)csv_data.size());
	INFOLOG("Freq table size : %d\n", (int)freq_table.size());



	startable.Check_icebergCondition(freq_table[att_height], csv_data, height_index, "height*", iceberg);


	startable.Check_icebergCondition(freq_table[att_length], csv_data, length_index, "weight*", iceberg);


	startable.Check_icebergCondition(freq_table[att_area], csv_data, area_index, "area*", iceberg);

	startable.Check_icebergCondition(freq_table[att_eccen], csv_data, eccen_index, "eccen*", iceberg);
	startable.Check_icebergCondition(freq_table[att_pblack], csv_data, pblack_index, "pblack*", iceberg);

	startable.Check_icebergCondition(freq_table[att_pand], csv_data, pand_index, "pand*", iceberg);

	startable.Check_icebergCondition(freq_table[att_meantr], csv_data, meantr_index, "meantr*", iceberg);

	startable.Check_icebergCondition(freq_table[att_blackpix], csv_data, blackpix_index,"blackpix*", iceberg);

	startable.Check_icebergCondition(freq_table[att_blackand], csv_data, blackand_index, "blackandt*", iceberg);

	startable.Check_icebergCondition(freq_table[att_wbtrans], csv_data, wbtrans_index, "wbtrans*", iceberg);







	cout <<  "Un compressed table : " <<  csv_data.size() <<  ",  atrributes : " <<  csv_data[0].size() << endl;;


	csv_data = startable.create_compressed_basetable(csv_data);
	//
	 reader.printdata(csv_data);
	cout <<  "Compressed table : " <<  csv_data.size() <<  ",  atrributes : " <<  csv_data[0].size() <<  endl;



	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << "Elapsed time: " << elapsed.count() << " s\n";


	getrusage(RUSAGE_SELF, &r_usage);

	cout << r_usage.ru_maxrss << endl;
	cout << r_usage.ru_ixrss << endl;



	return 0;
}
