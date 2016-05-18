        #include <bits/stdc++.h>
        using namespace std;
         
        typedef long long int ll;
         
        #define gc getchar_unlocked
        inline void scan(ll& x){
        register int c=gc();
        x=0;
        for (;(c<48||c>57);c=gc());
        for (;(c>=48&&c<=57);c=gc()){x=(x<<1)+(x<<3)+c-48;}
        }
         
        typedef struct s{
        	ll h;
        	ll r;
        }tree;
        int main()
        {
        	int flag = 0,f = 0;
        	ll n, w, l, months, i, j, sum, mini, min_i, sumh = 0, sumr = 0, y;
        	//cin >> n >> w >> l;
        	scan(n);scan(w);scan(l);
        	tree a[n];ll minimum[n];
        	mini = INT_MAX;
     
        	for(i = 0;i < n;i++)
        	{
        		//cin >> a[i].h;
        		//cin >> a[i].r;
        		scan(a[i].h);
        		scan(a[i].r);
        		sumh += a[i].h;
        		sumr += a[i].r;
        		mini = (l- a[i].h) / a[i].r;
        		minimum[i] = mini;
         		if(a[i].h >= w)
         			f = 10;
        		
        	}
         
        	for(i = 0;i < n;i++)
        	{
        		if(minimum[i] <= 0) minimum[i] = 1;
        		//cout << minimum[i] << " ";
        		mini = min(minimum[i], mini);
        			
        	}

        	//vector<ll> v(minimum, minimum + n);
        	//make_heap(v.begin(), v.end());
        	
        	int c = 0;
        	sort(minimum, minimum + n, greater<int>());
        	for(i = 1;i < n;i++)
        	{
        		if(minimum[i] != minimum[i - 1])
        			c++;

        	}
        	
        	/*for(i = 0;i < n;i++)
        	{
        		cout << minimum[i] << " ";
        	}
        	cout << endl;*/
        	
        	
        	ll x = minimum[c];
     
        	//cout << x << endl;
        	if(f != 10)
        	{
        		for(j = 0;j < n;j++)
    	    	{
    	    		//x = v.front();
    	    		//pop_heap (v.begin(),v.end()); v.pop_back();
    	    		x = minimum[j];
    	    		
    	    		sum = 0;
    	    		for(i = 0;i < n;i++)
    	    		{
    	    			
    	    			if(a[i].h + x * a[i].r >= l)
    	    				sum += a[i].h + x * a[i].r;
    	     
    	    			if(sum >= w)
    	    			{
    	    				
    	    				break;
    	    			}
    	     
    	    		}
     
    	    		if(sum < w)
    	    		{
    	    			flag = 3;
    	    			break;
    	    		}
    	    			
    	     
    	    		
    	    		
    	    		//cout << "x = " << x << endl;
    	     
    	    	}
    	    	r:y = (w - sumh) / sumr;
    	    	//cout << "Before entering second loop x = "<< x << "and y = " << y << endl;
    	    	
     			x = max(y, x);
    	    	while(x)
    	    	{
    	    		sum = 0;
    	    		for(i = 0;i < n;i++)
    	    		{
    	    			
    	    			if(a[i].h + x * a[i].r >= l)
    	    				sum += a[i].h + x * a[i].r;
    	     
    	    			if(sum >= w)
    	    			{
    	    				flag = 4;
    	    				break;
    	    			}
    	     
    	    		}
    	    		if(flag == 4)break;
    	    		x++;
    	    	}
        	}
        	
         	if(f == 10) printf("%d\n",0);
         	else
        	printf("%lld\n", x);
         
        	
         
         
         
        }  