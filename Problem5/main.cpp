#include <iostream>

using namespace std;

const bool DivByOTT(const int &num)
{
	for (int k = 2; k <= 20; ++k)
	{
		if ((num % k) != 0) return false;	
	}
	return true;
}

int main(int argc, char** argv)
{
	bool solved = false;
	int n=0;
	do
	{
		n+=20;
		if (DivByOTT(n)) 
			solved = true;
	} while (solved == false);
	cout<<"Smallest number div. by 1-20: "<<n<<endl;
}
