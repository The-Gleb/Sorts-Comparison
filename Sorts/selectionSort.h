#pragma once
#include <iostream>
#include <iterator>

int a[]{ 1,6,11,3,2,10,4 };



template <typename T, size_t N>
void sortBySelection(T(&a)[N])
{

	
	for (int i = 0; i < N - 1; i++)
	{

		int minIndex = i;


		for (int j = i + 1; j < N; j++) {
			if (a[j] < a[minIndex]) minIndex = j;
		};

		if (minIndex != i)
		{
			T tmp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = tmp;
		}
	}
};

template <typename T, size_t N>
void printArr(T(&a)[N])
{
	std::cout << "[";
	for (int i = 0; i < N; i++)
	{
		std::cout << a[i] << ",";
	}
	std::cout << "]";

}