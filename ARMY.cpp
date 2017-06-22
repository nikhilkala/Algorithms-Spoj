#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	printf("\n");
	int ng,nm,i;
	scanf("%d %d",&ng,&nm);
	int arr1[ng];
	int arr2[nm];
		for(i=0;i<ng;i++)
		scanf("%d",&arr1[i]);
		for(i=0;i<nm;i++)
		scanf("%d",&arr2[i]);
		sort(arr1,arr1+ng);
		sort(arr2,arr2+nm);
		if(arr1[ng-1]>=arr2[nm-1])
		printf("Godzilla\n");
		else
		printf("MechaGodzilla\n");
		}
	return 0;
}
