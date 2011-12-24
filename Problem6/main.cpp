#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int ssquare = 0, ssum = 0;
	for (int j = 0; j <= 100; ++j)
	{
		ssum += j;
		ssquare += (j*j);
	}
	ssum = ssum*ssum;
	cout<<"Difference between sum of square/square of sum 1-100: "<<ssum-ssquare<<endl;

}
