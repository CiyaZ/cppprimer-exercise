#include <iostream>
#include <string>

using namespace std;

int main()
{
	int grade;
	cin >> grade;
	string result;
	if(grade >= 90)
	{
		result = "high pass";
	}
	else if(grade >= 75 && grade < 90)
	{
		result = "low pass";
	}
	else if(grade >= 60 && grade < 75)
	{
		result = "pass";
	}
	else
	{
		result = "pass";
	}
	cout << result << endl;
	return 0;
}