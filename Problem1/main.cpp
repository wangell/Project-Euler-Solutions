#include <iostream>

int main(int argc, char** argv)
{
	int total = 0;
	for (int k = 1; k < 1000; ++k)
	{
		if (((k % 3) == 0)||((k % 5) == 0)) total += k;
	}
	std::cout<<"Sum of multiples of 3 or 5 below 1000: "<<total<<std::endl;
}
