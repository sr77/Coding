    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int n, i, t;
    	cin >> t;
    	while( t-- )
    	{
    		int countR , countB , countG ;
    		countG = countB = countR = 0;
    		cin >> n;
    		char color[n+1];
    		for(i = 0; i < n; i++)
    		{
    			cin >> color[i];
    			if(color[i] == 'R')
    				countR++;
    			if(color[i] == 'B')
    				countB++;
    			if(color[i] == 'G')
    				countG++;
    		}
     
    		cout << (n - max(countR, max(countG, countB))) <<endl;
    	}
    } 
