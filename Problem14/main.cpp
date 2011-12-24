#include <iostream>

using namespace std;

unsigned long OddForm(const unsigned long &n)
{
	return (n*3)+1;
}

unsigned long EvenForm(const unsigned long &n)
{
	return (n/2);
}

unsigned int ChainLength(const unsigned long &n)
{
	unsigned int total = 0;
	unsigned long curNum = n;
	while (curNum != 1)
	{
		if ((curNum % 2) == 0)
		{
			curNum = EvenForm(curNum);
		}
		else
		{
			curNum = OddForm(curNum);
		}
		++total;
	}
	//Because current number is one, increment the chain total
	++total;
	return total;
}

int main(int argc, char** argv)
{
	unsigned int gTotal = 0;
	unsigned long number = 0;
	for (unsigned long j = 1; j < 1000000; ++j)
	{
		unsigned int ttotal = ChainLength(j);
		if (ttotal > gTotal)
		{
			number = j;
			gTotal = ttotal;
		}
	}
	cout<<"Longest chain for starting # under 1000000: "<<number<<endl;
	cout<<"Chain length: "<<gTotal<<endl;
}
