#include "person.h"

std::string Person::getName() const
{
	return this->name;
}

std::string Person::getAddress() const
{
	return this->address;
}

std::istream &read(std::istream &in, Person &p)
{
	in >> p.name >> p.address;
	return in;
}

void print(std::ostream &out, const Person &p)
{
	out << p.name << "\t" << p.address << std::endl;
}