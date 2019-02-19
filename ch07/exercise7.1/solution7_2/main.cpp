#include <iostream>
#include "salesdata.h"

using namespace std;

int main()
{
	SalesData sd1;
	sd1.name = "cpp";
	sd1.id = "001";
	sd1.price = 10.0;
	sd1.sold = 1;
	
	SalesData sd2;
	sd2.name = "cpp";
	sd2.id = "001";
	sd2.price = 10.0;
	sd2.sold = 2;
	
	cout << sd1.isbn() << endl;
	
	sd1.combine(sd2);
	cout << sd1.sold << endl;
	
	return 0;
}