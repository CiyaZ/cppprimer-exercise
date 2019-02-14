#include <iostream>
#include <string>

using namespace std;

int main()
{
	int grade;
	cin >> grade;
	string result = (grade >= 90) ? "high pass"
								 : (grade >= 75) ? "low pass"
								 : (grade >= 60) ? "fail" : "pass";
	cout << result << endl;
	return 0;
}