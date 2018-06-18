#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H


#include <map>
#include <vector>
#include <string>
class CsvReader
{

public:

	std::vector<std::vector<std::string> > read_csv(std::map<std::string, std::map<std::string, int> >& freq_table);

	void printdata(std::vector<std::vector<std::string> > &csvdata);
};


class StarTable
{

public:

	void Check_icebergCondition( std::map<std::string, int> & attrs_freq, std::vector<std::vector<std::string> > &csv_data, int attr_index, std::string star_val, int iceberg_condition);
	std::vector<std::vector<std::string> > create_compressed_basetable(std::vector<std::vector<std::string> >& table);
	std::string  generate_key(std::vector<std::string> row);
};

#endif
