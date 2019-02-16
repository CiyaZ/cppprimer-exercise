#include <iostream>
#include <vector>

using namespace std;

int add(int i, int j)
{
	return i + j;
}

int sub(int i, int j)
{
	return i - j;
}

int div(int i, int j)
{
	if(j == 0)
	{
		throw runtime_error("divide zero error");
	}
	else
	{
		return i / j;
	}
}

int mult(int i, int j)
{
	return i * j;
}

int main()
{
	vector<int (*)(int, int)> vec;
	vec.push_back(add);
	vec.push_back(sub);
	vec.push_back(div);
	vec.push_back(mult);
	cout << vec[0](1, 2) << endl;
	cout << vec[1](1, 2) << endl;
	cout << vec[2](1, 2) << endl;
	cout << vec[3](1, 2) << endl;
	return 0;
}