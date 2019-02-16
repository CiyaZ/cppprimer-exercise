#include <iostream>

using namespace std;

int fact(int n);

int main()
{
	cout << fact(5) << endl;
	return 0;
}

int fact(int n)
{
	int result = 1;
	for(int i = n; i > 1; i--)
	{
		result *= i;
	}
	return result;
}