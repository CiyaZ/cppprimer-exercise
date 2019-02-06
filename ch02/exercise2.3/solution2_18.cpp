#include <iostream>

using namespace std;

/*
 * 编写代码分别更改指针的值以及指针所指对象的值。
 */
int main()
{
	int i = 10;
	int j = 20;
	int *p = &i;
	
	// 更改指针的值
	p = &j;
	cout << *p << endl;
	
	// 更改指针指向对象的值
	*p = i;
	cout << *p << endl;
	
	return 0;
}