/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

	a2 + b2 = c2
	For example, 32 + 42 = 9 + 16 = 25 = 52.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.

*/

#include "pch.h"
#include <iostream>

int main()
{
	int sum = 1000;
	int a, b, c;
	for (int a = 1; a <= 1000; a++)
	{
		for (int b = a + 1; b <= 1000; b++)
		{
			c = sum - a - b;
			if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				std::cout << a << " " << b << " " << c<<"\n";
		}
	}
     
}

