#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
{
int i,n,b;
char c;
long long int sum;
cin>>sum;
while(1)
{
scanf(" %c",&c);
if (c =='=')
{
cout<<sum<<endl;
break;
}
else
{
scanf(" %d",&b);	
switch(c)
{
	case '+' :
        sum= sum+b;
        break;
    case '-' :
        sum= sum-b;
        break;
    case '*' :
        sum= sum*b;
        break;
    case '/' :
        sum= sum/b;
        break;
    case '%' :
        sum= sum%b;
        break;
    case '^' :
        sum= sum^b;
        break;
}		

}	

}
}


return 0;
}
