#include <iostream>

/*
 * 编写程序，从cin读取一组数，输出其和。
 */
int main()
{
	int sum = 0;
	int i;
	while(std::cin >> i)
	{
		sum += i;
	}

	std::cout << sum << std::endl;

	return 0;
}