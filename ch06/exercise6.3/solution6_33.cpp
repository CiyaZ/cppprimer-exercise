#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> &vec, int start);

int main()
{
	vector<int> iVec = {1, 2, 3, 4, 5};
	printVec(iVec, 0);
	return 0;
}

void printVec(vector<int> &vec, int start)
{
	if(start < vec.size())
	{
		cout << vec[start] << endl;
		printVec(vec, start + 1);
	}
}