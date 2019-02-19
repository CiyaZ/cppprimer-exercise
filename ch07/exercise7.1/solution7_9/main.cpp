#include <iostream>
#include "person.h"

int main()
{
	Person p;
	read(std::cin, p);
	print(std::cout, p);
	return 0;
}