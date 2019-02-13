#include <iostream>

using namespace std;

int main()
{
	string str = "Hello, world!";
	for(char &c : str)
	{
		c = 'X';
	}
	cout << str << endl;
	return 0;
}