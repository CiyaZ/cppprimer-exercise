#include <iostream>
#include <string>

using namespace std;

int main()
{
	do
	{
		string s1, s2;
		if(!(cin >> s1 >> s2))
		{
			break;
		}
		else
		{
			if(s1.length() < s2.length())
			{
				cout << s1 << endl;;
			}
			else
			{
				cout << s2 << endl;
			}
		}
	}
	while(true);
	return 0;
}