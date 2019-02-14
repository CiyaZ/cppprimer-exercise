#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};
	for(int &i : vec)
	{
		if(i % 2 == 1)
		{
			i *= 2;
		}
	}
	
	for(int i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}