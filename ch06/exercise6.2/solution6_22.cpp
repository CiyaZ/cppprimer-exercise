#include <iostream>

using namespace std;

void swapPtr(int *&p1, int *&p2);

int main()
{
	int i = 1;
	int j = 2;
	int *ptrI = &i;
	int *ptrJ = &j;
	swapPtr(ptrI, ptrJ);
	cout << *ptrI << " " << *ptrJ << endl;
	return 0;
}

void swapPtr(int *&p1, int *&p2)
{
	int *tmp = p1;
	p1 = p2;
	p2 = tmp;
}