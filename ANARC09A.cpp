#include <bits/stdc++.h>
using namespace std;

int main() 
{
for(int t=1;;t++)
{
stack<char>s;
string str;
cin>>str;
if(str[0]=='-')
break;
int l=str.length();
int i,ans=0;
char c;
for(i=0;i<l;i++)
{
c=str[i];
if(c=='{')
s.push('{');
else
{
if(s.empty())
{
ans++;
s.push('{');
}	
else
s.pop();
}
}
while(!s.empty())
{
	ans++;
	s.pop();
	s.pop();
}
cout<<t<<". "<<ans<<endl;
}
	return 0;
}
