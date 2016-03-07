/*A 64-bit integer can be viewed as an array of 64 bits, with the bit at
index 0 corresponding to the least significant bit,and the bit at index 63corresponding to the
most significant bit. Implement code that tnJces as input a 64-bit integer x and swaps the bits
at indices iand j.*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll SwapTwoBits(ll n, int i, int j)
{
	if((n >> i) & 1 != (n >> j) & 1)
	{
		n  ^= (1 << i) | (1 << j);
	}
	return n;
}

int main()
{
	ll n = 5;
	int i = 0;
	int j = 1;
	/*
		Here the LSB is at index 0 and the MSB is at the highest index
		so we can directly use the i and j values

		E.g - 
		Bit Sequence-    1  0  1 
		Index Sequence-  2  1  0

		Or else if the MSB is at the first index and the LSB at the last index 
		we have to compute i as i = (Total number of bits - GivenValueOfi )
		similary compute j as j = (Total number of bits - GivenValueOfj)

		E.g-
		Bit Sequence-    1  0  1 
		Index Sequence-  0  1  2


	*/
	ll result = SwapTwoBits(n, i, j);
	cout <<"After swapping the number becomes "<< result << endl;
}