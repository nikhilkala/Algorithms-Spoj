#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int n,c;

int func(long long int arr[],int x)
{
long long int i,count=1,last=arr[0];	
	for(i=1;i<n;i++)
	{
		if((arr[i]-last)>=x)
		{
			last=arr[i];
			count++;
		}
		if(count==c)
		return 1;
	}
return 0;


}
long long binsearch(long long int arr[])
{
	long long int l=0;
	long long int as=0;
	long long int high=arr[n-1];
	while(l<high)
	{
	long long int mid=(l+high)/2;
	if(func(arr,mid)==1)
	{
	if(as<mid)
	as=mid;
	l=mid+1;
	}
	else
	high=mid;
	}
	return as;
}
int main() 
{
long long int t;
cin>>t;
while(t--)
{
	cin>>n>>c;
	long long int arr[n];
	for(int i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	sort(arr,arr+n);
	long long int ans=binsearch(arr);
	cout<<ans<<endl;

}
	return 0;
}
