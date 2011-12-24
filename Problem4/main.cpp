#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const bool isPalindrome(const int &num)
{
	stringstream ss;
	ss << num;
	string jammy = ss.str();
	for (int k = 0; k < jammy.length()/2; ++k)
	{
		if (jammy[k] != jammy[jammy.length()-k-1])
			return false;
	}
	return true;
}

int main(int argc, char** argv)
{
	int largest = 0;
	for (int k = 100; k <= 999; ++k)
	{
		for (int j = 100; j <= 999; ++j)
		{
			int f = k*j;
			if (isPalindrome(f) && (f > largest))
				largest = f;
		}
	}
	cout<<"Largest palindrome from product of two 3-digit #s: "<<largest<<endl;
}
