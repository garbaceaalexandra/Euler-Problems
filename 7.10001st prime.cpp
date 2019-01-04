//By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number ?
#include "pch.h"
#include <iostream>
int primalitate(int n)
{
	if (n == 2)
		return 1;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return 0;
	return 1;

}

int main()
{
	int lastnr;
	int number = 2;
	int counter = 0;
	while (counter < 10001)
	{
		if (primalitate(number) == 1)
		{
			counter++;
			lastnr = number;
		}
		number += 1;
	}
	std::cout << lastnr;
		

}
