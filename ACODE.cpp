#include <bits/stdc++.h>
using namespace std;
int dig(char a)
{
 int x= int(int(a)-int('0'));	
return x;
}	

int main() 
{
while(1)
{
	string str;
	cin>>str;
	if(str[0]=='0')
	break;
	int size=str.length();
	int arr[size+1];
	arr[size]=1;
	if(str[size-1]=='0')
	arr[size-1]=0;
	else
	arr[size-1]=1;
	int i;
	for(i=size-2;i>=0;i--)
	{
		if(str[i]=='0')
		arr[i]=0;
		else if(dig(str[i])>2)
		arr[i]=arr[i+1];
		else if(dig(str[i])==2)
		{
			if(dig(str[i+1])>6)
			arr[i]=arr[i+1];
			else
			arr[i]=arr[i+1]+arr[i+2];
		}
		else
		arr[i]=arr[i+1]+arr[i+2];
	}
	cout<<arr[0]<<endl;
		
		
	}
		return 0;
}
