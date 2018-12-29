//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?
#include "pch.h"
#include <iostream>
int divizor, divmax;
long long n = 600851475143;
int main()
{
	
	divizor = 2;

	while (n > 1)
	{
		if (n % divizor == 0)
		{
			
			while (n % divizor == 0)
			{
				n /= divizor;
			}
			if (divizor > divmax)
				divmax = divizor;
		}
		divizor++;
	}
	std::cout << divmax;
}

