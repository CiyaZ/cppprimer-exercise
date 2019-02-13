#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVec;
	
	int i;
	while(cin >> i)
	{
		intVec.push_back(i);
	}
	
	cout << "Size:";
	cout << intVec.size() << endl;
	
	cout << "Elements:";
	// for(int n : intVec)
	// {
		// cout << n << " ";
	// }
	vector<int>::const_iterator it = intVec.cbegin();
	while(it != intVec.cend())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}