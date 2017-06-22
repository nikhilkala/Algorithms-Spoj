#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n;
double d;
cin>>n;
int i,j,tot=0;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		if((j*j)==i)
		tot++;
		if(i%j==0)
		tot++;
	}
}
tot/=2;
cout<<tot;
	return 0;
}
