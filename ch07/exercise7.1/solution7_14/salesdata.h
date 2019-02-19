#ifndef SALESDATA_H
#define SALESDATA_H

#include <iostream>
#include <string>

struct SalesData
{
	std::string id = "";
	std::string name = "";
	double price = 0.0;
	int sold = 0;
	
	SalesData() = default;
	SalesData(std::istream &in);
	SalesData(const std::string &id, const std::string &name, double price, int sold): 
		id(id), name(name), price(price), sold(sold) {}
	
	std::string isbn() const;
	void combine(const SalesData &s);
};

SalesData add(const SalesData &sd1, const SalesData &sd2);
std::istream &read(std::istream &in, SalesData &sd);
void print(std::ostream &out, const SalesData &sd);

#endif