#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string input;
	string result = "";
	cin >> input;
	for(char c : input)
	{
		if(!ispunct(c))
		{
			result += c;
		}
	}
	cout << result << endl;
	return 0;
}