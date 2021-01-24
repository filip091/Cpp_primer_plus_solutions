// golf.cpp -- definitions of function from golf.h

#include <iostream>
#include <cstring>
#include "golf.h"


void setgolf(golf & g, const char * name, int hc)
{
	std::strncpy(g.fullname, name, Len);
	g.fullname[Len - 1] = '\0';
	g.handicap = hc;
}

int setgolf(golf & g)
{
	char name[Len];

	std::cout << "Write name: ";

//	while (std::cin.get() != '\n')
//		;

	std::cin.getline(name, Len);
	int hc;
	std::cout << "Number of handicap: ";
	std::cin >> hc;

	if (name[0] != 0)
	{
		setgolf(g, name, hc);
		return 1;
	}
	return 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	using std::cout;
	using std::endl;
	cout << g.fullname << endl << g.handicap << endl;
}

