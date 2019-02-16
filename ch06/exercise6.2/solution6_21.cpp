#include <iostream>

using namespace std;

int func(int a,const int *b);

int main()
{
	int i = 2;
	cout << func(1, &i) << endl;
	return 0;
}

int func(int a,const int *b)
{
	if(a > *b)
	{
		return a;
	}
	else
	{
		return *b;
	}
}