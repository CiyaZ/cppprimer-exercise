#include "salesdata.h"

std::string SalesData::isbn() const
{
	return this->id;
}

void SalesData::combine(const SalesData &s)
{
	this->sold += s.sold;
}

SalesData add(const SalesData &sd1, const SalesData &sd2)
{
	SalesData sd;
	sd.id = sd1.id;
	sd.name = sd1.name;
	sd.price = sd1.price;
	sd.sold = sd1.sold + sd2.sold;
	return sd;
}

std::istream &read(std::istream &in, SalesData &sd)
{
	std::string name;
	std::string id;
	double price;
	int sold;
	
	in >> id >> name >> price >> sold;
	
	sd.id = id;
	sd.name = name;
	sd.price = price;
	sd.sold = sold;
	
	return in;
}

void print(std::ostream &out, const SalesData &sd)
{
	out << sd.id << "\t" << sd.name << "\t" << sd.price << "\t" << sd.sold << std::endl;
}