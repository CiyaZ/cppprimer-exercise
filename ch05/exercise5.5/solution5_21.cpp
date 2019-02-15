#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	bool haveResult = false;
	string input = "";
	string preInput = "";
	
	while(cin >> input)
	{
		if(preInput == input && isupper(input[0]))
		{
			haveResult = true;
			cout << input << endl;
			break;
		}
		else
		{
			preInput = input;
		}
	}
	
	if(!haveResult)
	{
		cout << "No Result" << endl;
	}
	return 0;
}
