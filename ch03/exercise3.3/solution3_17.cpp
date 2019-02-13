#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	vector<string> strVec;
	string str;
	while(cin >> str)
	{
		for(char &c : str)
		{
			c = toupper(c);
		}
		strVec.push_back(str);
	}
	
	for(string str : strVec)
	{
		cout << str << endl;
	}
	
	return 0;
}