#include <iostream>
#include "screen.h"

using namespace std;

void Screen::display(std::ostream &out)
{
	for(int i = 0; i < this->width; i++)
	{
		for(int j = 0; j < this->height; j++)
		{
			out << this->contents[this->width * i + j];
		}
		out << endl;
	}
}