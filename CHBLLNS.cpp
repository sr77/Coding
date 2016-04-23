    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
     
    int main()
    {
    	ll t, R, G, B, K;
    	cin >> t;
    	int ans = 0;
    	while( t-- )
    	{
    		int flagR = 0,flagG = 0, flagB = 0;
    		ll ans = 0;
    		cin >> R >> G >> B;
    		cin >> K;
    		ll maxi = max(R, max(G, B));
    		ll mini = min(R, min(G, B));
    		ll med;
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
     
    		if(K <= mini)
    		{
    			ans = (K - 1)*3 + 1; 
    			cout << ans <<endl;
    			continue;
    		}
     
    		if(K > mini && K <= med)
    		{
    			ans = (mini * 3) + (K- mini)*2 -1;
    			cout << ans << endl;
    			continue;
    		}
     
    		if(K > med)
    		{
    			ans = (mini * 3) + (med - mini)*2 + (K - med);
    			cout << ans << endl;
    			continue;
    		}
    			
    	}
    } 