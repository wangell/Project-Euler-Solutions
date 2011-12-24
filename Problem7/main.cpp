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
	int n = 3, nprime=2;
	do
	{
		n+=2;	
		if (isPrime(n))
		{
			++nprime;
			cout<<n<<endl;
		}
	} while (nprime != 10001);
	cout<<"10001st Prime: "<<n<<endl;
}
