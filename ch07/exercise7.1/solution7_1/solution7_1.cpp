#include <iostream>
#include <string>
#include <map>
#include "model.h"

using namespace std;

int main()
{
	// 存储数据的哈希表
	map<string, struct SalesData *> db;
	
	// 读取输入
	string bookId;
	string bookName;
	double price;
	int sold;
	while(cin >> bookId >> bookName >> price >> sold)
	{
		// 查看相同ISBN的书是否存在
		if(db.find(bookId) != db.end())
		{
			// 存在的情况
			db[bookId]->sold += sold;
		}
		else
		{
			// 不存在的情况
			// 组装实体类
			struct SalesData *salesData = new SalesData();
			salesData->price = price;
			salesData->sold = sold;
			struct Book *book = new Book();
			book->bookId = bookId;
			book->bookName = bookName;
			salesData->book = book;
			
			// 存入哈希表
			db[bookId] = salesData;
		}	
	}
	
	// 输出结果
	cout << "ISBN\tBookName\tSales\t" << endl;
	map<string, struct SalesData *>::iterator it = db.begin();
	while(it != db.end())
	{
		cout << it->first << "\t" << it->second->book->bookName << "\t" << (it->second->price * it->second->sold) << endl;
		it++;
	}
	
	// 销毁分配的堆内存
	it = db.begin();
	while(it != db.end())
	{
		delete(it->second->book);
		delete(it->second);
		it++;
	}
	
	return 0;
}