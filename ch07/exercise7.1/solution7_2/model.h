#ifndef MODEL_H
#define MODEL_H

struct Book {
	std::string bookId;
	std::string bookName;
};

struct SalesData {
	struct Book *book;
	double price = 0.0;
	int sold = 0;

	std::string isbn() const;
	SalesData & combine(const SalesData &s);
};

#endif
