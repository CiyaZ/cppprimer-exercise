#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> intVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int>::iterator it = intVec.begin();
	while(it != intVec.end())
	{
		*it = (*it) * 2;
		it++;
	}
	
	for(int i : intVec)
	{
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}