#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str1 = "hello";
	string str2 = "hello";
	
	const char* s1 = "hello";
	const char* s2 = "hello";
	
	cout << (str1 == str2) << endl;
	cout << strcmp(s1, s2) << endl;
	
	return 0;
}