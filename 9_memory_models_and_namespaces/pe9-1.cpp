// pe9-1.cpp -- main function of golf

#include <iostream>
#include <cstring>
#include "golf.h"

int main()
{
	golf g[Len];
	int return_num = setgolf(g[0]);
	for (int i = 1; i < Len && return_num; i++)
	{
		showgolf(g[i-1]);
		handicap(g[i-1], 0);
		showgolf(g[i-1]);
		std::cin.get();
		return_num = setgolf(g[i]);
	}
	return 0;


}
