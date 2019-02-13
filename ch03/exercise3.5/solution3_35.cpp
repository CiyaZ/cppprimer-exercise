#include <iostream>

using namespace std;

int main()
{
	int arr[3] = {1, 2, 3};
	for(int &i : arr)
	{
		i = 0;
	}
	
	for(int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}