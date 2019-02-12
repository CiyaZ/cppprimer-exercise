#include <iostream>

using namespace std;

struct Book {
	string bookId;
	string bookName;
};

struct SalesData {
	struct Book *book;
	double price = 0.0;
	int sold = 0;
};

int main()
{
	struct Book *book = new struct Book();
	book->bookId = "13: 9780321714114";
	book->bookName = "C++ Primer";
	
	struct SalesData *salesData = new struct SalesData();
	salesData->book = book;
	salesData->price = 19.99;
	salesData->sold = 1;
	
	cout 
		<< salesData->book->bookId
		<< "\t" 
		<< salesData->book->bookName
		<< "\t"
		<< salesData->price * salesData->sold
		<< endl;
	
	delete book;
	delete salesData;
	
	return 0;
}