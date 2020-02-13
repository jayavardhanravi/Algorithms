#pragma once
#include <iostream>

class BinarySearch
{
public:
	BinarySearch() 
	{
		std::cout << "----------------BINARY SEARCH----------------" << std::endl;
		Run();
	};
	~BinarySearch() {};

private:
	void Run();
	int Search(int *array, int startIndex, int endIndex, int searchValue);
};

void BinarySearch::Run()
{
	// PROBLEM: Finding the index of the given element in an array
	// INPUTS: Sorted array
	// OUTPUT: 'Index' of the element if found else return '-1'

	std::cout << "Enter the size of the array : ";
	int inputDataSize;
	std::cin >> inputDataSize;
	int *inputData = new int[inputDataSize];
	std::cout << "Enter the array elements : ";
	for (auto i = 0; i < inputDataSize; ++i)
		std::cin >> inputData[i];
	int valueToSearch;
	std::cout << "Enter the search value : ";
	std::cin >> valueToSearch;
	int outputData = Search(inputData, 0, inputDataSize-1, valueToSearch);
	std::cout << "Output : " << outputData << std::endl;
	delete[] inputData;
}

int BinarySearch::Search(int *array, int startIndex, int endIndex, int searchValue)
{
	// Recursive approach used
	// Checked to see if the start index is the starting point
	if (startIndex <= endIndex)
	{
		// Finding the middle index
		int middleIndex = startIndex + (endIndex -startIndex) / 2;
		// Checking the middle value
		if (array[middleIndex] == searchValue)
			return middleIndex;
		else if (array[middleIndex] < searchValue) // Checking the Right part of array
			return Search(array, middleIndex + 1, endIndex, searchValue);
		else if (array[middleIndex] > searchValue) // Checking the Left part of array
			return Search(array, startIndex, middleIndex - 1, searchValue);
	}
	return -1; // return -1 if nothing found
}