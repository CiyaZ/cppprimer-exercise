#include <iostream>

/*
 * 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
 */
int main()
{
	int i, j;

	std::cout << "请输入两个整数：" << std::endl;
	std::cin >> i >> j;

	if(i > j)
	{
		int tmp = i;
		i = j;
		j = tmp;
	}

	std::cout << i << "和" << j << "之间的数：" << std::endl;
	
	for(int p = i + 1; p < j; p++)
	{
		std::cout << p << std::endl;
	}

	return 0;
}
