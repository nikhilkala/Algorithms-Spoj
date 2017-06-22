#include <iostream>
using namespace std;

int main() {
	while(1)
	{
		long long int n;
		cin>>n;
		if(n==-1)
		break;
		long long int i,b;
		i=0;
		b=1;
		while(1)
		{
			b=b+(6*i);
			if(b>n)
			{
			cout<<"N\n";
			break;
			}
			if(b==n)
			{
			cout<<"Y\n";		
			break;
			}
			if(b<n)
			i++;
		}	
			
			
		
		
		
		
		
	}
	return 0;
}
