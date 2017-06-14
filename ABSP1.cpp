#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
int i,n;
long long int sum=0;
cin>>n;
long long int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	sum=sum - ((n-i-1)*arr[i]) + (i*arr[i]);
cout<<sum<<endl;
}
	return 0;
}
