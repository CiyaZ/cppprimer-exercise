#include <iostream>

using namespace std;

int main()
{
	string str = "Hello, world!";
	for(string::size_type i = 0; i < str.size(); i++)
	{
		str[i] = 'X';
	}
	cout << str << endl;
	return 0;
}