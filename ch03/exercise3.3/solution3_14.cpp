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
	
	for(int n : intVec)
	{
		cout << n << endl;
	}
	return 0;
}