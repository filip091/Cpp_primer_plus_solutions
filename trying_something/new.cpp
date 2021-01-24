// learning how to work with C++11 new


#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

int main()
{
	int *arr;
	try {
		std::cout << "Trying to allocate.\n";
		arr = new int[20];
		std::cout << "Got past the new request\n";
	}
	catch (bad_alloc & ba)
	{
		std::cout << "Caught the exception\n";
		std::cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Memory successfully allocated\n";
	arr[0] = 3;
	cout << arr[0] << endl;
	delete [] arr;
	return 0;
}
