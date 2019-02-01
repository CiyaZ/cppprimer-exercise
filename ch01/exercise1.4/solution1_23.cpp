#include <iostream>
#include <map>
#include <string>
#include "Sales_item.h"

using namespace std;

/*
 * 编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
 */
int main()
{
	map<string, int> bookStatistics;
	
	Sales_item book;
	while(cin >> book)
	{
		string isbn = book.isbn();
		map<string, int>::iterator iter = bookStatistics.find(isbn);
		if(iter != bookStatistics.end())
		{
			// 该书存在的情况
			int currentCnt = iter->second;
			bookStatistics[isbn] = currentCnt + 1;
		}
		else
		{
			// 该书不存在的情况
			bookStatistics[isbn] = 1;
		}
	}
	
	for(map<string, int>::iterator iter = bookStatistics.begin(); iter != bookStatistics.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;
}
