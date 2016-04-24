#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100005
char arr[MAX];
ll modpowIter(ll a, ll b, ll c) 
{
        ll ans=1;
        while(b != 0) 
        {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}

int main()
{
	ll A, B, i, temp;
	ll ans = 0;
	cin >> A >> B;
	cin >> arr;
	temp= A;
	ll len = strlen(arr);

	for(i = 0; i < len; i++)
	{
		
		if(arr[i] == '1')
		{
			ans += modpowIter(temp, pow(2, i) , B);
			ans = ans%B;
		}
		
	}

	cout << ans <<endl;
}