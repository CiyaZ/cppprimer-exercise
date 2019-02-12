#ifndef MODEL_H
#define MODEL_H

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

#endif