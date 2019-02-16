#include <iostream>

using namespace std;

int fact(int n);

int main()
{
	int i;
	cin >> i;
	cout << fact(i) << endl;
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