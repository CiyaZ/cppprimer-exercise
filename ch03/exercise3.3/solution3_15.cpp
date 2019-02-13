#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> charVec;
	
	string input;
	cin >> input;
	
	for(char c : input)
	{
		charVec.push_back(c);
	}
	
	for(char c : charVec)
	{
		cout << c << endl;
	}
	return 0;
}