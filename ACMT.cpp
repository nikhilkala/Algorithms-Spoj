#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
{
	long int n,e,ans=0;
	cin>>n>>e;
	while(n>1&&e>1)
	{
		if (n>e)
		{
			n=n-2;
			e--;
			ans++;
		}
		else
		{
			e=e-2;
			n--;
			ans++;
		}
	}
if (n==1&&e>1)
ans++;
if (e==1&&n>1)
ans++;
cout<<ans<<endl;
}

	return 0;
}
