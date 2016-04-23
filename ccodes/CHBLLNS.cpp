#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, R, G, B, K;
	cin >> t;
	int ans = 0;
	while( t-- )
	{
		int flagR = 0,flagG = 0, flagB = 0;
		long long int ans = 0;
		cin >> R >> G >> B;
		cin >> K;
		int maxi = max(R, max(G, B));
		int mini = min(R, min(G, B));
		int med;
		if(maxi == R) flagR = 2;
		if(maxi == G) flagG = 2;
		if(maxi == B) flagB = 2;

		if(mini == R) flagR = 1;
		if(mini == G) flagG = 1;
		if(mini == B) flagB = 1;

		if(flagR == 2 && flagB == 1) med = G;
		if(flagR == 2 && flagG == 1) med = B;
		if(flagG == 2 && flagB == 1) med = R;
		if(flagB == 2 && flagR == 1) med = G;
		if(flagG == 2 && flagR == 1) med = B;
		if(flagB == 2 && flagG == 1) med = R;

		cout << ((min(R,K-1)) + (min(G,K-1)) + (min(B,K-1)) +1) << endl;
			
	}
}