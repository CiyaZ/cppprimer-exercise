#include <iostream>

using namespace std;

void print(int i);
void print(int *arr, int size);

int main()
{
	int i = 0;
	print(i);
	
	int j[2] = {0, 1};
	print(j, 2);
	
	return 0;
}

void print(int i)
{
	cout << i << endl;
}

void print(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}