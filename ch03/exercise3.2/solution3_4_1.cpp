#include <iostream>

using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	
	if(str1 == str2)
	{
		cout << "相等" << endl;
	}
	else if(str1 > str2)
	{
		cout << str1 << endl;
	}
	else
	{
		cout << str2 << endl;
	}
	return 0;
}