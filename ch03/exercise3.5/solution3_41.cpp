#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int arr[3] = {1, 2, 3};
	vector<int> vec(begin(arr), end(arr));
	for(int i : vec)
	{
		cout << i << endl;
	}
	return 0;
}