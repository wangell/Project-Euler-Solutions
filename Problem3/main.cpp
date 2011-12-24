#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

const bool isPrime(const unsigned long &num)
{
	for (unsigned long k = 3; k <= sqrt(num); k+=2)
	{
		if ((num % k) == 0) return false;
	}
	return true;
}

int main(int argc, char** argv)
{
	unsigned long p = 0;
	for (unsigned long j = sqrt(600851475143)-1; j > 0; j-=2)
	{
		if ((600851475143 % j) == 0)
		{
			if (isPrime(j))
			{
				p = j;
				break;	
			}
		}
	}
	std::cout<<"Largest prime factor: "<<p<<std::endl;
}

