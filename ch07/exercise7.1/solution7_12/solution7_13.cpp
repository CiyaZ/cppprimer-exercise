#include <iostream>
#include <string>
#include <map>
#include "salesdata.h"

using namespace std;

int main()
{
	// 存储数据的哈希表
	map<string, struct SalesData *> db;
	
	// 读取输入
	istream& in = cin;
	while(in)
	{
		SalesData sd(in);
		// 查看相同ISBN的书是否存在
		if(db.find(sd.isbn()) != db.end())
		{
			// 存在的情况
			db[sd.isbn()]->sold += sd.sold;
		}
		else
		{
			// 不存在的情况
			// 组装实体类
			struct SalesData *salesData = new SalesData();
			salesData->price = sd.price;
			salesData->sold = sd.sold;
			salesData->id = sd.id;
			salesData->name = sd.name;
			
			// 存入哈希表
			db[sd.isbn()] = salesData;
		}	
	}
	
	// 输出结果
	cout << "ISBN\tBookName\tSales\t" << endl;
	map<string, struct SalesData *>::iterator it = db.begin();
	while(it != db.end())
	{
		print(cout, *(it->second));
		it++;
	}
	
	// 销毁分配的堆内存
	it = db.begin();
	while(it != db.end())
	{
		delete(it->second);
		it++;
	}
	
	return 0;
}