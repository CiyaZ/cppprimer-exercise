#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

int main()
{
	int i = 1;
	int j = 2;
	swap(i, j);
	cout << i << " " << j << endl;
	return 0;
}