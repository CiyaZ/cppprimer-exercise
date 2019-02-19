#include <iostream>
#include "salesdata.h"

int main()
{
	SalesData sd("001", "AAA", 10, 1);
	print(std::cout, sd);
	return 0;
}