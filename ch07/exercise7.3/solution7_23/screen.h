#ifndef DEMO01_SCREEN_H
#define DEMO01_SCREEN_H

#include <string>

class Screen
{
public:
	typedef std::string::size_type pos;

	Screen() = default;

	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * width, 'X')
	{};

	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c)
	{};

	inline char get() const
	{
		return contents[cursor];
	}

	inline char get(pos ht, pos wd) const
	{
		return contents[ht * width + wd];
	}

	inline Screen &move(pos ht, pos wd)
	{
		this->cursor = ht * width + wd;
		return *this;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents = "";
};

#endif //DEMO01_SCREEN_H
