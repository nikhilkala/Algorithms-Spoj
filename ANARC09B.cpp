#include <bits/stdc++.h>
using namespace std;

int main()
{
while(1)	
	{
	long long int a,b;
	cin>>a>>b;
	if(a==0 && b==0)
	break;
	if (a>b)
	{
		if(a%b==0)
		cout<<a/b<<endl;
		else
		cout<<a*b<<endl;
	}
	else
	{
		if(b%a==0)
		cout<<b/a<<endl;
		else
		cout<<a*b<<endl;
	}
		
	}
	return 0;
}
