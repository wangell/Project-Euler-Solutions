#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

const unsigned long NextTriangle(const unsigned long &n)
{
	unsigned long total = 0;
	for (unsigned long j = 1; j <= n; ++j)
	{
		total+=j;
	}
	return total;
}

const int NumFactors(const unsigned long &n)
{
	if (n == 1)
		return 1;
	int numF = 0;
	for (unsigned long j = 1; j < sqrt(n); ++j)
	{
		if ((n % j) == 0)
			numF+=2;
	}
	return numF;
}

int main(int argc, char** argv)
{
	int numF = 0;
	int curT = 0;
	do
	{
		++curT;
		unsigned long nT = NextTriangle(curT);
		numF = NumFactors(nT);
	} while (numF <= 500);
	cout<<"First triangle with over 500 divisors: "<<NextTriangle(curT)<<endl;
}

