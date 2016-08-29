/*
Write an efficient C program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
*/

#include <bits/stdc++.h>
using namespace std;


int kadane(int a[], int n)
{
	int curr_max = 0, max_sum = a[0], i, start = 0, end = 0, s = 0, maxi = INT_MIN, flag = 0;
	for(i = 0;i < n;i++)
	{
		if(a[i] > 0)
		{
			
			flag = 1;
			break;

		}
			

		else
		{
			if(maxi < a[i])
			{
				s = i;
				end = i;
				maxi = a[i];
			}
		}


	}

	if(!flag && maxi < 0)
	{
		cout << "Start : " << s << " End : " << end << " Max sum : " << maxi << endl;
	}
	if(flag)
	{
		for(i = 0;i < n;i++)
		{
			curr_max += a[i];
			if(curr_max < 0)
			{
				if(i + 1 < n)
				start = i + 1;
				curr_max = 0;
			}	

			else if(curr_max > max_sum)
			{
				s = start;
				end = i;
				max_sum = curr_max;
			}
		}

		cout << "Start : " << s << " End : " << end << " Max sum : " << max_sum << endl;
	}
	
	
	curr_max = a[0], max_sum = a[0];
	for(i = 1;i < n;i++)
	{
		curr_max = max(a[i], curr_max + a[i]);
		max_sum = max(max_sum, curr_max);
	}

	return max_sum;
}


int main()
{
    int a[] = {-1, -1, -1};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = kadane(a, n);
    cout << "Maximum contiguous sum is : " << max_sum << endl;
    return 0;
}