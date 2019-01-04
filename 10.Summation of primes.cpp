//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.
#include "pch.h"
#include <iostream>
int primalitate(int n)
{
	
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;

}

int main()
{
	long int  sum = 2;
	for (int number = 3; number <= 2000000; number++)
	{
		if (primalitate(number) == 1)
		{
			sum += number;
			
		}
	}
	std::cout << sum;


}
