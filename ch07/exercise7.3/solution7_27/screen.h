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
	
	inline Screen &set(char ch)
	{
		this->contents[this->cursor] = ch;
		return *this;
	}
	
	inline Screen &set(pos ht, pos wd, char ch)
	{
		this->contents[ht * width + wd] = ch;
		return *this;
	}
	
	void display(std::ostream &out);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents = "";
};

#endif //DEMO01_SCREEN_H
