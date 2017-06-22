#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	long long int t3,tn3,sum,i,d,a,n,tn;
	cin>>t3>>tn3>>sum;
	n=(2*sum)/(t3+tn3);
	d=(tn3-t3)/(n-5);
	a=t3-(2*d);	
	cout<<n<<endl;
	cout<<a;
	for(i=1;i<n;i++)	
		{
			tn=a+(i*d);
			cout<<" "<<tn;
		}
		cout<<endl;
		
	}
	return 0;
}
