#include <iostream>

using namespace std;

int main()
{
	string s;
	string result1 = "";
	string result2 = "";
	
	while(cin >> s)
	{
		result1 += s;
		
		result2 += s;
		result2 += " ";
	}
	
	cout << result1 << endl;
	cout << result2 << endl;
	
	return 0;
}