// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.
#include "pch.h"
#include <iostream>
long sum, sum1,sum2;

int main()
{
	/*
	for (int i = 3; i <= 1000; i+=3)
	{
		
		sum += i;
	}
	std::cout << "\n";
	for (int i = 5; i <= 1000; i += 5)
	{
		sum += i;
	}
	std::cout << sum;
	*/

	sum1 = 3 * (333 * 334) / 2;
	sum2 = 5 * (200 * 201) / 2;
	std::cout << sum1 + sum2;

}

