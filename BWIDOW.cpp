#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
{
int i,n;
cin>>n;
long long int arr1[n+1];
long long int arr2[n+1];
arr2[0]=0;
for(i=1;i<=n;i++)
cin>>arr1[i]>>arr2[i];
long long int max=0;
int ind=0;
for(i=1;i<=n;i++)
{
if(arr1[i]>max)
{
	ind=i;
	max=arr1[i];
}
}
sort(arr2,arr2+n+1);

if(arr2[n]<max||arr2[n-1]<max)
cout<<ind<<endl;
else
cout<<"-1"<<endl;
}	return 0;
}
