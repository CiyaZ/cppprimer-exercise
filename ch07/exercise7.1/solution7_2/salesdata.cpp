#include "salesdata.h"

std::string SalesData::isbn() const
{
	return this->id;
}

void SalesData::combine(const SalesData &s)
{
	this->sold += s.sold;
}