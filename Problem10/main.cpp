#include <iostream>
#include <math.h>

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
	unsigned long n = 3, nprime=2;
	while (n < 2000000)	
	{
		if (isPrime(n))
		{
			nprime+=n;
			cout<<n<<" "<<nprime<<endl;
		}
		n+=2;	
	};
	cout<<"Sum of primes < 2000000: "<<nprime<<endl;
}
