#include <iostream>
#include "Sales_item.h"

/*
 * 编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和。
 */
int main()
{
	Sales_item bookSum;
	std::cin >> bookSum;

	Sales_item book;
	while(std::cin >> book)
	{
		bookSum += book;
	}

	std::cout << bookSum << std::endl;

	return 0;
}
