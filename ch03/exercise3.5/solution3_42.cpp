#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3};
	int arr[3];
	
	int *p = begin(arr);
	for(int i : vec)
	{
		*p = i;
		p++;
	}
	
	for(int i : arr)
	{
		cout << i << endl;
	}
	
	return 0;
}