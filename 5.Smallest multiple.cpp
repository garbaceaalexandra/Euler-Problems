//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
#include "pch.h"
#include <iostream>
int primalitate(int n)
{
	if (n == 2)
		return 1;
	for (int i = 3; i <= n/2 ; i+=2) 
		if (n % i == 0) 
			return 0;
	return 1;
	
}

int main()
{
	int i = 2;
	int j = 1;
	while (pow(i, j) <= 20)
	{
		j++;
	}
	int p = pow(i, j - 1);
	
	i = 3;
	while (i <= 20)
	{
		//p = 1;
		j = 1;
		if (primalitate(i) == 1)
		{
			while (pow(i, j) <= 20)
			{

				j++;
			}
		}
		p = p * pow(i, j-1);
		
		i+=2;
	}
	std::cout << p;
	
	
}

