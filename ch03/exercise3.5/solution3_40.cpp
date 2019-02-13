#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s1[6] = "hello";
	char s2[6] = "world";
	char s3[11];
	strcpy(s3, s1);
	strcat(s3, s2);
	
	cout << s3 << endl;
	
	return 0;
}