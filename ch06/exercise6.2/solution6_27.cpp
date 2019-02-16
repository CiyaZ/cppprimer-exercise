#include <iostream>

using namespace std;

int sum(initializer_list<int> intArgs);

int main()
{
	int i = sum({1, 2, 3, 4, 5});
	cout << i << endl;
	return 0;
}

int sum(initializer_list<int> intArgs)
{
	int sum = 0;
	for(int i : intArgs)
	{
		sum += i;
	}
	return sum;
}