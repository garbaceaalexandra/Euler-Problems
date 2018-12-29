// Each new term in the Fibonacci sequence is generated by adding the previous two terms.
//By starting with 1 and 2, the first 10 terms will be:

//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.
#include "pch.h"
#include <iostream>
long a, b, c, sum;
int main()
{
	a = 1;
	b = 2;
	sum = sum + a + b;
	while (a + b <= 4000000)
	{
		sum = sum + a+b;
		c = a + b;
		
		a = b;
		b = c;
		
	}
	std::cout <<"SUMA: "<< sum;
}
