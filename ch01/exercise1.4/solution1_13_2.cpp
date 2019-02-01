#include <iostream>

/*
 * 编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
 */
int main()
{
	for(int i = 10; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
	return 0;
}
