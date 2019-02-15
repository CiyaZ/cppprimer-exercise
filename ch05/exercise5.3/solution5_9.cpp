#include <iostream>
#include <string>

using namespace std;

int main()
{
	string target = "aeiouAEIOU";
	unsigned cnt = 0;
	
	string str;
	cin >> str;
	for(char c : str)
	{
		if(target.find(c) != string::npos)
		{
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}