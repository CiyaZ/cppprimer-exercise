#include <iostream>

using namespace std;

int main()
{
	constexpr size_t SIZE_X = 3;
	constexpr size_t SIZE_Y = 3;
	int ia[SIZE_X][SIZE_Y] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};
	
	for(auto &p : ia)
	{
		for(int q : p)
		{
			cout << q << endl;
		}
	}
}