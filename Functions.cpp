#include <vector>
#include <iostream>
#include "Functions.h"
#include "logger.h"
#include <fstream>
#include <map>
#include <iomanip>

using namespace std;

extern string  att_height, att_length, att_area, att_eccen,att_pblack,att_pand, att_meantr,att_blackpix,att_blackand,att_wbtrans;
extern int  height_index, length_index, area_index, eccen_index, pblack_index,meantr_index,blackpix_index,blackand_index,wbtrans_index,pand_index;



vector<vector<string> > CsvReader :: read_csv(map<string, map<string, int> >& freq_table){

	INFOLOG("Start reading csv file for input.\n");



	map<string, map<string, int> >::iterator outerit;
	map<string, int>::iterator innerit;
	vector<vector<string> > csv_data;
	vector<string> tuple;
	string Height,Length, area, eccen, pblack, pand, meantr, blackpix, blackand, wbtrans;
	string csv_file_name = "/Users/manojkumargopala/Sem_2/Machine Learning/Project1/Star_cube_page_block/Star_cube/page-blocks.csv";

	ifstream csv_file(csv_file_name);

	if(!csv_file.is_open()){
		ERRORLOG("Problem in file open()\n");
		return csv_data;
	}




	// read field names
    getline ( csv_file, att_height, ',' );
    freq_table[att_height] = map<string, int>();
    height_index = 0;

    getline ( csv_file, att_length, ',' );
    freq_table[att_length] = map<string, int>();
    length_index = 1;

    getline ( csv_file, att_area, ',' );
    freq_table[att_area] = map<string, int>();
    area_index = 2;

    getline ( csv_file, att_eccen, ',' );
    freq_table[att_eccen] = map<string, int>();
    eccen_index = 3;

    getline ( csv_file, att_pblack, ',' );
    freq_table[att_pblack] = map<string, int>();
    pblack_index = 4;

    getline ( csv_file, att_pand, ',' );
    freq_table[att_pand] = map<string, int>();
    pand_index = 5;

    getline ( csv_file, att_meantr, ',' );
    freq_table[att_meantr] = map<string, int>();
    meantr_index = 6;

    getline ( csv_file, att_blackpix, ',' );
    freq_table[att_blackpix] = map<string, int>();
	blackpix_index = 7;


    getline ( csv_file, att_blackand, ',' );
    freq_table[att_blackand] = map<string, int>();
	blackand_index = 8;

    getline ( csv_file, att_wbtrans, ',' );
    freq_table[att_wbtrans] = map<string, int>();
	wbtrans_index = 9;





	while ( csv_file.good() )
	{
	     getline ( csv_file,Height , ',' );
	     tuple.push_back(Height);
	     getline ( csv_file, Length, ',' );
	     tuple.push_back(Length);
	     getline ( csv_file, area, ',' );
		 tuple.push_back(area);
	     getline ( csv_file, eccen, ',' );
	     tuple.push_back(eccen);
	     getline ( csv_file, pblack, ',' );
	     tuple.push_back(pblack);



	     getline ( csv_file, pand, ',' );
	     tuple.push_back(pand);



	     getline ( csv_file, meantr, ',' );
	     tuple.push_back(meantr);


	     getline ( csv_file, blackpix, ',' );
	     tuple.push_back(blackpix);

	     getline ( csv_file, blackand, ',' );
	     tuple.push_back(blackand);
	     getline ( csv_file, wbtrans, ',' );
	     tuple.push_back(wbtrans);










		 csv_data.push_back(tuple);
	     tuple.clear();

		//Height,Length, area, eccen, pblack, pand, meantr, blackpix, blackand, wbtrans;

	     freq_table[att_height][Height]++;
	     freq_table[att_length][Length]++;
		freq_table[att_area][area]++;
	     freq_table[att_eccen][eccen]++;

	     freq_table[att_pblack][pblack]++;
		freq_table[att_pand][pand]++;

		freq_table[att_meantr][meantr]++;

		freq_table[att_blackpix][blackpix]++;
		freq_table[att_blackand][blackand]++;





		freq_table[att_wbtrans][wbtrans]++;






	}

	return csv_data;
}

void CsvReader :: printdata(vector<vector<string> > &csvdata){



	for(int i = 0; i < csvdata.size() ; i++ ){
		cout <<  setw(14)<< csvdata[i][0] << setw(14)<< csvdata[i][1] <<setw(14) <<   csvdata[i][2] << setw(14) <<   csvdata[i][3] << setw(14) << csvdata[i][4] <<setw(14) <<   csvdata[i][5] << setw(14) <<   csvdata[i][6] << setw(14) << csvdata[i][7]<< setw(14) << csvdata[i][8] << setw(14) << csvdata[i][9] << setw(14) << csvdata[i][9+1]<< endl;

	}
	cout << "Number of tuples : " << csvdata.size()  <<endl;
	cout << "Number of atrributes : " << csvdata[0].size()  <<endl;
}



void StarTable ::  Check_icebergCondition( map<string, int> & attrs_freq, vector<vector<string> > &csv_data, int attr_index, string star_val, int iceberg_condition){

	map<string, string>  star_table;
	map<string, string>::iterator it;
	map<string, int>::iterator innerit;

	for(innerit = attrs_freq.begin() ; innerit != attrs_freq.end() ; innerit++){

		if(innerit->second < iceberg_condition || innerit->first.compare("NA") == 0 )
			star_table[innerit->first] = star_val;
		else
			star_table[innerit->first] = innerit->first;
	}




	for(int i = 0 ;i < csv_data.size() ; i++){
		csv_data[i][attr_index] = star_table[csv_data[i][attr_index]];
	}

}

vector<vector<string> >  StarTable :: create_compressed_basetable(vector<vector<string> >& table){

	vector<vector<string> > compressed_table;
	vector<string> row;
	vector<vector<string> >::iterator  it;

	map<string, int>  row_count;
	map<string, int>::iterator  row_count_it;
	string key ;

	string sep = ",";

	size_t pos = 0;
	string val;

	for(it = table.begin() ; it != table.end() ; it++){
		key = generate_key(*it);
		row_count[key]++;
	}

	for(row_count_it = row_count.begin() ; row_count_it != row_count.end(); row_count_it++){
		key = row_count_it->first;

		row.clear();
		while ((pos = key.find(sep)) != string::npos) {
			val = key.substr(0 , pos);
			row.push_back(val);
			key.erase(0 ,  pos + sep.length());
		}

		row.push_back(key);
		row.push_back(to_string(row_count_it->second));
		compressed_table.push_back(row);


	}



	return compressed_table;
}

string StarTable :: generate_key(vector<string> row){
	string sep = ",";
	string key = row[0];
	for(int i = 1 ; i <  row.size() ; i++){
		key = key + sep + row[i];

	}

	return key;



}






