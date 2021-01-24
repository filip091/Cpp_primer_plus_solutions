#include <iostream>
#include "sales.h"

int main()
{
	SALES::Sales s1, s2;
	double arr[] = {1, 2, 3, 4};
	SALES::setSales(s1, arr, 4);
	SALES::setSales(s2);
	showSales(s1);
	showSales(s2);

	return 0;
}
