#include <iostream>

int main(int argc, char** argv)
{
	int sum = 0, a = 1, b = 2;
	while (a <= 4000000)
	{
		if ((a % 2) == 0) sum += a;
		int c = b;
		b = a+b;
		a = c;
	}
	std::cout<<"Sum: "<<sum<<std::endl;
}
