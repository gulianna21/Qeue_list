#include "TQueue.h"
#include <iostream>


int main()
{
	TQueue<int> list;

	try
	{
		list.add(9);
		list.add(2);
		list.add(3);
		list.add(5);
		list.add(7);
		std::cout << list << std::endl;
		std::cout << list.get() << std::endl << std::endl;
		std::cout << list;
		for (int i = 0; i < 17; i++)
			list.add(i);
		std::cout << std::endl << std::endl << list;
	}
	catch (int e)
	{
		std::cout << "oshibochka" << std::endl << list;
	}
	
	std::cin.get();
	std::cin.get();
	return 0;
}