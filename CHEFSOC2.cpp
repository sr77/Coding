#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
struct arr{

	int key;
	int count;

}hassh[1005],h[1005];


int M[1005];
int main()
{
	int t, n, m, s, i, j, sum;
	cin >> t;
	while(t--)
	{
		cin >> n >> m >> s;
		for(i = 0;i <= n;i++)
		{
			hassh[i].key = 0;
			hassh[i].count = 0;
			h[i].key = 0;
			h[i].count = 0;
		}


		hassh[s].key = 1;
		hassh[s].count = 1;
		

		for(i = 1;i <= m; i++)
			cin >> M[i];
		
		for(i = 1;i <= m;i++)
		{
			
			for(j = 1;j <= n;j++)
			{
				if(hassh[j].key)
				{
					
					if(j + M[i] <= n && j + M[i] >= 1 && M[i])
					{
						
						h[j + M[i]].key = ( 1 ) ;
						h[j + M[i]].count = (h[j + M[i]].count %MOD + hassh[j].count %MOD)%MOD;
						//cout << "Index = " << j + M[i] << "Value = " << h[j + M[i]] << endl;
					}
						
					if(j - M[i] >= 1 && j - M[i] <= n && M[i])
					{
						
						h[j - M[i]].key = ( 1 ) ;	
						h[j - M[i]].count = (h[j - M[i]].count %MOD + hassh[j].count %MOD) %MOD;
						//cout << "Index = " << j - M[i] << "Value = " << h[j - M[i]] << endl;
						
					}
					hassh[j].key = 0;
					hassh[j].count = 0;
					
						
				}
				
				
			}
			for(int k = 1;k <= n;k++)
			{
				hassh[k].key = h[k].key;
				hassh[k].count = h[k].count;
			}
				
			if(i != m)
			{
				for(int k = 1;k <= n;k++)
				{
					h[k].key = 0;
					h[k].count = 0;
				}
			}
			

			//cout << endl;
		}

		/*for(i = 1;i <= n;i++)
		{
			if(hassh[i])
			{
				
				if(i + M[m] <= n && M[m])
				{
					
					h[i + M[m]] = (h[i + M[m]] + 1 ) % MOD;
				}
					
				if(i - M[m] >= 1 && M[m])
				{
					
					h[i - M[m]] = (h[i - M[m]] + 1 ) % MOD;
			
				}
				
			}
					
		}*/

		for(i = 1;i <= n;i++)
			cout << h[i].count << " ";
		cout << endl;
	}
}