#include <iostream>

using namespace std;

int sum1();
int sum2();

int main()
{
	cout << sum1() << sum2() << endl;
	return 0;
}

int sum1()
{
	int sum = 0;
	for(int i = 0; i <= 3; i++)
	{
		sum += i;
	}
	return sum;
}

int sum2()
{
	int sum = 0;
	int i = 0;
	while(i <= 3)
	{
		sum += i;
		i++;
	}
	return sum;
}