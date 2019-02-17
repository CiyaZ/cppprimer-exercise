#include "model.h"

std::string SalesData::isbn() const
{
	return this->book->bookId;
}

SalesData & SalesData::combine(const SalesData &s)
{
	this->sold += s.sold;
	return *this;
}