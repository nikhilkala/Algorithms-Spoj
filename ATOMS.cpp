#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
{
double n,k,m;
cin>>n>>k>>m;
long long int ans=0;
while(m>=(n*k))
{
m/=k;
ans++;
}
cout<<ans<<endl;
}
	return 0;
}
