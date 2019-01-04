//The sum of the squares of the first ten natural numbers is,

//1^2 + 2^2 + ... + 10^2 = 385
//The square of the sum of the first ten natural numbers is,

//(1 + 2 + ... + 10)^2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include "pch.h"
#include <iostream>

int main()
{
	long sum1, sum2;

	//1^2 + 2^2 + ... + 100^2 = 338350
	//1/6(n(n+1)(2n+1))
	sum1 =  (100*(100 + 1)*(2 * 100 + 1))/6;
	//(1 + 2 + ... + 100)^2 = 5050^2 = 25502500
	//n(n+1)/2
	sum2 = (100*(100 + 1) / 2);
	if (sum1 > sum2*sum2)
		std::cout << sum1 - sum2 * sum2;
	else
		std::cout << sum2 * sum2 - sum1;
}

