#include <iostream>

/*
 * 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */
int main()
{
	int i = 10;
	while(i >= 0)
	{
		std::cout << i << std::endl;
		i--;
	}
	return 0;
}
