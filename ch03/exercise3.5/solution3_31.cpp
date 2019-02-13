#include <iostream>

using namespace std;

int main()
{
	int arr[10];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	for(int i : arr)
	{
		cout << i << endl;
	}

	return 0;
}
