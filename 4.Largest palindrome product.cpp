// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3 - digit numbers.

#include "pch.h"
#include <iostream>
int palindrom(int n)
{
	int  copie, invers = 0;
	copie = n;
	while (n != 0) {
		invers = invers * 10 + n % 10;
		n = n / 10;
	}
	if (invers == copie)
		return 1;
	else
		return 0;
}
int main()
{
	int maxpal = 0, numar;
	for (int i = 999; i >= 100; i--)
		for (int j = i; j >= 100; j--)
		{
			numar = i * j;
			if (palindrom(numar) == 1 && numar > maxpal)
				maxpal = numar;
		}
	std::cout << maxpal;
	
}

