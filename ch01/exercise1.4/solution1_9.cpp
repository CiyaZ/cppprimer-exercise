#include <iostream>

/*
 * 编写程序，使用while循环将50到100的整数相加。
 */
int main()
{
	int sum = 0;
	int i = 50;
	while(i <= 100)
	{
		sum += i;
		i++;
	}

	std::cout << sum << std::endl;

	return 0;
}
