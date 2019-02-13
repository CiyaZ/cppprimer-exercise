#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVec;
	int input;
	while(cin >> input)
	{
		intVec.push_back(input);
	}
	
	for(int i = 0; i < intVec.size() - 1; i++)
	{
		cout << intVec[i] + intVec[i + 1] << " ";
	}
	cout << endl;
	
	for(int j = 0; j < intVec.size() / 2; j++)
	{
		cout << intVec[j] + intVec[intVec.size() - j - 1] << " ";
	}
	cout << endl;
	
	return 0;
}