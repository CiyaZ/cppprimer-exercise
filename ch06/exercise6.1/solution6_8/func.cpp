#include "Chapter6.h"

int fact(int n)
{
	int result = 1;
	for(int i = n; i > 1; i--)
	{
		result *= i;
	}
	return result;
}
