#include <iostream>
#include "Sales_item.h"

/*
 * 编写一个程序，读取一组书籍的销售记录，将每条记录打印到标准输出上。
 */
int main()
{
	Sales_item book;
	while(std::cin >> book)
	{
		std::cout << book << std::endl;
	}

	return 0;
}
