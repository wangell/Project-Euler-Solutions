#include <iostream>

using namespace std;

const string hundred = "hundred";
const string thousand = "thousand";
const string singles[9] = {"one","two","three","four","five","six","seven","eight","nine"};
const string tens[9] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
const string teens[9] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
"seventeen","eighteen","nineteen"};
int main(int argc, char** argv)
{
	string theTotal;
	for (int k = 0; k < 9; ++k)
	{
		theTotal+=singles[k];
	}
	for (int k = 0; k < 9; ++k)
	{
		theTotal+=teens[k];
	}
	for (int k = 0; k < 9; ++k)
	{
		for (int j = 0; j < 9; ++j)
		{

		}
	}
}
