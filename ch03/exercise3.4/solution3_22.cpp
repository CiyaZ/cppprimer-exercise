#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <iterator>

using namespace std;

string strToUpperCase(string str);

int main()
{
	vector<string> strVec;
	
	string input;
	while(getline(cin, input))
	{
		strVec.push_back(input);
	}
	
	vector<string>::const_iterator it = strVec.cbegin();
	int cnt = 0;
	while(it != strVec.cend() && !it->empty())
	{
		if(cnt == 0)
		{
			cout << strToUpperCase(*it) << endl;
		}
		else
		{
			cout << *it << endl;
		}
		cnt++;
		it++;
	}
	
	return 0;
}

string strToUpperCase(string str)
{
	string result = str;
	for(char &c : result)
	{
		c = toupper(c);
	}
	return result;
}