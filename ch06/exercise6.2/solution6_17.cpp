#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isHaveUpperCase(const string &s);
void toLowerStr(string &s);

int main()
{
	string s = "Helloworld";
	cout << isHaveUpperCase(s) << endl;
	toLowerStr(s);
	cout << s << endl;
	return 0;
}

bool isHaveUpperCase(const string &s)
{
	for(char c : s)
	{
		if(isupper(c))
		{
			return true;
		}
		return false;
	}
}

void toLowerStr(string &s)
{
	for(char &c : s)
	{
		c = tolower(c);
	}
}