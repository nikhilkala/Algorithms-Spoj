#include <bits/stdc++.h>
using namespace std;
int big(int a ,int b , int c)
{
if(a>=b && a>=c)
return a;
else if(b>=c && b>=a)
return b;
else
return c;
}	
int main() 
{
int t;
cin>>t;
while(t--)
{
int ans[101][101]={0};
int h,w,i,j;
cin>>h>>w;
int arr[h][w];
for(i=0;i<h;i++)
{
	for(j=0;j<w;j++)
	{
		cin>>arr[i][j];
	}
}
for(i=1;i<=h;i++)
{
	for(j=1;j<=w;j++)
	{
		ans[i][j]=arr[i-1][j-1]+big(ans[i-1][j-1],ans[i-1][j],ans[i-1][j+1]);
	}
}
int max=0;
for(i=1;i<=w;i++)
{
	if(ans[h][i]>max)
	max=ans[h][i];
}
cout<<max<<endl;

}
	return 0;
}
