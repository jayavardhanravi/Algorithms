#pragma once
#include "BinarySearch.h"

enum AlgoName
{
	BINARY_SEARCH = 0
};

// Program selection Function
void Run(int programNumber)
{
	switch(programNumber)
	{
		case AlgoName::BINARY_SEARCH :
		{
			BinarySearch program;
			break;
		}
		default:
			break;
	}
}
