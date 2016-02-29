#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, count = 0;
	cin >> n;
	int a[n],b[n+1];
	for(i = 0;i <= n;i++)
		b[i] = 0;
	for(i = 0;i < n;i++)
	{
		cin >> a[i];
		if(a[i] == 0)
			b[0]++;
		else
		b[a[i]]++;
	}
	for(i = 1;i <= n;i++)
	{
		//cout<<b[i]<<" ";
		if(!b[i])
			cout<<i<<" ";
	}
	cout<<endl;
}