#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool cmpArr(const int* arr1, const int* arr2, int size);
bool cmpVec(const vector<int> vec1, const vector<int> vec2);

int main()
{
	int arr1[3] = {1, 2, 3};
	int arr2[3] = {4, 5, 6};
	vector<int> vec1 = {1, 2, 3};
	vector<int> vec2 = {4, 5, 6};
	
	cout << cmpArr(arr1, arr1, 3) << endl;
	cout << cmpArr(arr1, arr2, 3) << endl;
	cout << cmpVec(vec1, vec1) << endl;
	cout << cmpVec(vec1, vec2) << endl;
	
	return 0;
}

bool cmpArr(const int* arr1, const int* arr2, int size)
{
	const int *p1 = arr1;
	const int *p2 = arr2;
	for(int i = 0; i < size; i++)
	{
		if(*p1 != *p2)
		{
			return false;
		}
	}
	return true;
}

bool cmpVec(const vector<int> vec1, const vector<int> vec2)
{
	vector<int>::const_iterator p1 = vec1.cbegin();
	vector<int>::const_iterator p1End = vec1.cend();
	vector<int>::const_iterator p2 = vec2.cbegin();
	vector<int>::const_iterator p2End = vec2.cend();
	
	while(p1 != p1End && p2 != p2End)
	{
		if(*p1 != *p2)
		{
			return false;
		}
		p1++;
		p2++;
	}
	
	if(p1 == p1End && p2 == p2End)
	{
		return true;
	}
	else
	{
		return false;
	}
}