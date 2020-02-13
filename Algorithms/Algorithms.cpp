#include <iostream>
#include "Commons.h"

int main()
{
	int selection;
    std::cout << "Select the program to run : ";
	std::cin >> selection;
	Run(selection);
}
