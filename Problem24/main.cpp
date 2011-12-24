#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

const string nextLexPermutation(const string &qc)
{
	string c = qc;
	int lK = -1;
	for (int k = 0; k < c.length()-1; ++k)
	{
		if (c[k] < c[k+1])
		{
			if (lK < k)
				lK = k;
		}
	}
	if (lK == -1)
		return c;
	int lL = -1;
	for (int j = 0; j < c.length(); ++j)
	{
		if (c[lK] < c[j])
		{
			if (lL < j)
				lL = j;
		}
	}
	swap(c[lK],c[lL]);
	
	for (int r = lK+1,u = c.length()-1; r <= u; ++r,--u)
	{
		swap(c[r],c[u]);
	}
	return c;
}

int main(int argc, char** argv)
{
	int iter = 1;
	string curPerm = "0123456789";
	do
	{
		curPerm = nextLexPermutation(curPerm);
		++iter;
	} while (iter != 1000000);
	cout<<"Millionth lexicographic permutation: "<<curPerm<<endl;

}
