#include <iostream>

using namespace std;

int main()
{
	string str = "Hello, world!";
	string::size_type i = 0;
	while(i < str.size())
	{
		str[i] = 'X';
		i++;
	}
	cout << str << endl;
	return 0;
}