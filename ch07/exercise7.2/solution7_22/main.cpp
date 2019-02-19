#include <iostream>
#include "person.h"

int main()
{
	Person p("Tom", "L.A.");
	print(std::cout, p);
	return 0;
}