#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
int t;
scanf("%d",&t);
while(t--)
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	long int arr[n];
	for (i=0;i<n;i++)
	scanf("%ld",&arr[i]);
	sort(arr,arr+n);
	long int diff=1000000000;
	long int diff1;
	for(i=0;i<=n-k;i++)
	{
		diff1=arr[i+k-1]-arr[i];
		if(diff1<diff)
		diff=diff1;
	}
	printf("%ld\n",diff);
}

	return 0;
}
