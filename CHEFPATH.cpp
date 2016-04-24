#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int t;
	ll n, m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		if((min(n, m) == 1 && max(n, m) == 2) || (min(n, m) >= 2 &&  (n%2 == 0 || m%2 == 0)))
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}