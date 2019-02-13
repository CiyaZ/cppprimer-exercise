#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> intVec(11);
	int input;
	while(cin >> input)
	{
		vector<int>::iterator it = intVec.begin();
		*(it + input / 10) += 1;
	}
	
	for(vector<int>::const_iterator it = intVec.cbegin(); it != intVec.cend(); it++)
	{
		cout << *it << endl;
	}
	
	return 0;
}