#include <bits/stdc++.h>
using namespace std;

int parity1(int n) //O(logn)
{
	bool result = 0;
	while( n )
	{
		n = n & (n-1);
		result = !result;
	}

	return result;
}

int parity2(int n)
{
	int result = 0;
	while(n)
	{
		result = result^ (n & 1);
		n = n>>1;
	}

	return result;
}

int main()
{
	int n = 32;
	int x = parity2(n);

	cout << "Parity of n is "<< x << endl;
} 