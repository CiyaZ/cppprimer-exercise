#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[10];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	
	vector<int> intVec;
	for(int i : arr)
	{
		intVec.push_back(i);
	}
	
	for(int i : intVec)
	{
		cout << i << endl;
	}
	
	return 0;
}