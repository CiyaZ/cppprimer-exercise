#include <iostream>
#include <vector>

using namespace std;

bool isPrefix(vector<int> prefix, vector<int> target);

int main()
{
	vector<int> v1 = {1, 2, 3};
	vector<int> v2 = {1, 2, 3, 4, 5};
	
	cout << isPrefix(v1, v2) << endl;
	
	return 0;
}

bool isPrefix(vector<int> prefix, vector<int> target)
{
	for(int i = 0; i < prefix.size(); i++)
	{
		if(prefix[i] != target[i])
		{
			return false;
		}
	}
	return true;
}