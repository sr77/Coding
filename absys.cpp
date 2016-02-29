#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main()
{
	int t,i,j,k;
	char a1,b1,c1,a2,b2,c2;
	char a[MAX],b[MAX],c[MAX];
	cin >> t;
	while(t--)
	{ 
		int num1 = 0, na = 0, num2 = 0, nb = 0, num3 = 0, nc = 0;
		scanf("%s%c%c%c%s%c%c%c%s",a,&a1,&b1,&c1,b,&a2,&b2,&c2,c);
		for(i = 0;i < strlen(a);i++)
		{
			if(isalpha(a[i]))
			{
				na = 1;
				break;
			}
			num1 = 10*num1 + (a[i]-'0');
		}

		for(i = 0;i < strlen(b);i++)
		{
			if(isalpha(b[i]))
			{
				nb = 1;
				break;
			}
			num2 = 10*num2 + (b[i]-'0');
		}

		for(i = 0;i < strlen(c);i++)
		{
			if(isalpha(c[i]))
			{
				nc = 1;
				break;
			}
			num3 = 10*num3 + (c[i]-'0');
		}

		if(na)
			num1 = num3 - num2;
		if(nb)
			num2 = num3 - num1;
		if(nc)
			num3 = num1 + num2;

		printf("%d + %d = %d\n",num1,num2,num3);

	}
}