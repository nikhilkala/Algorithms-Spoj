#include <iostream>
using namespace std;

int main() 
{
 int a1,a2,a3;
 while(1)
 {
	cin>>a1>>a2>>a3;
 	if(a1==0)
 	if(a2==0)
 	if(a3==0)
 	break;
 	int r1,r2,t;
 	r1=a2-a1;
 	r2=a3-a2;
 	if(r1==r2)
 	{
 		t=a3+r1;
 		cout<<"AP "<<t<<endl;
 	}
 	else{
 		r1=a3/a2;
 		t=a3*r1;
		cout<<"GP "<<t<<endl; 	
 	}
 	
 }
return 0;
}
