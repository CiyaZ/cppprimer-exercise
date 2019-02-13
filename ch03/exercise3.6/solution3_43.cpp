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
	
	for(int(&p)[3] : ia)
	{
		for(int q : p)
		{
			cout << q << endl;
		}
	}
	
	for(size_t i = 0; i < SIZE_X; i++)
	{
		for(size_t j = 0; j < SIZE_Y; j++)
		{
			cout << ia[i][j] << endl;
		}
	}
	
	for(size_t i = 0; i < SIZE_X; i++)
	{
		for(size_t j = 0; j < SIZE_Y; j++)
		{
			int (*p)[3] = ia;
			cout << (*(p + i))[j] << endl;
		}
	}
	
	return 0;
}