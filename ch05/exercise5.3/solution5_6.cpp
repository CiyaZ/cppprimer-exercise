#include <iostream>
#include <string>

using namespace std;

int main()
{
	int score;
	cin >> score;
	string result = (score >= 90) ? "A" : (
		(score >= 80) ? "B" : (
			(score >= 60) ? "C" : "D"
		)
	);
	cout << result << endl;
	return 0;
}