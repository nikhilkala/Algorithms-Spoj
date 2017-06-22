#include <bits/stdc++.h>
using namespace std;

int main() 
{
while(1)
{
int n,i;
int ans=12;
int f=10;
cin>>n;
if(n==0)
break;
if (n==1)
cout<<"5"<<endl;
else if(n==2)
cout<<"12"<<endl;
else
{
	for(i=3;i<=n;i++)
	{
	ans=ans+f;
	f=f+3;
	}
	cout<<ans<<endl;
}
}
	return 0;
}
