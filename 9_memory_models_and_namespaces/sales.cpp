// sales.cpp -- implementing functions from sales.h

#include <iostream>
#include "sales.h"

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double average = 0;
		double min = ar[0];
		double max = ar[0];
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			average += ar[i];
			if (ar[i] > max)
			{
				max = ar[i];
			}
			if (ar[i] < min)
			{
				min = ar[i];
			}
		}
		s.average = average / n;
		s.max = max;
		s.min = min;
	}

	void setSales(Sales & s)
	{
		s.average = 0;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Sale: ";
			std::cin >> s.sales[i];
			s.average += s.sales[i];
		}
		s.average /= 4;
		s.max = s.sales[0];
		s.min = s.sales[0];
		for (int i = 0; i < 4; i++)
		{
			if (s.sales[i] > s.max)
				s.max = s.sales[i];
			
			if (s.sales[i] < s.min)
				s.min = s.sales[i];
		}
	}

	void showSales(const Sales & s)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "sale: " << i+1 << " " << s.sales[i] << std::endl;
		}
		std::cout << "average: " << s.average;
		std::cout << "\nmax: " << s.max;
		std::cout << "\nmin: " << s.min << std::endl;
	}
}
	
				

