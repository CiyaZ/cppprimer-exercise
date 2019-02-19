#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>

struct SalesData
{
	std::string id;
	std::string name;
	double price = 0.0;
	int sold = 0;
	
	std::string isbn() const;
	void combine(const SalesData &s);
};

#endif