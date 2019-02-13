#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> intVec;
	int input;
	while(cin >> input)
	{
		intVec.push_back(input);
	}
	
	for(auto it = intVec.cbegin(); it < intVec.cend(); it++)
	{
		cout << *it + *(it + 1) << " ";
	}
	cout << endl;
	
	auto it1 = intVec.cbegin();
	auto it2 = intVec.cend() - 1;
	while(it1 < it2)
	{
		cout << *it1 + *it2 << " ";
		it1++;
		it2--;
	}
	cout << endl;
	
	return 0;
}