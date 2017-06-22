#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,m,n,sum,ans;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&m,&n);
        int rev1=0,rev2=0;
        while(m!=0)
        {
            rev1=rev1*10+m%10;
            m=m/10;
        }
        while(n!=0)
        {
            rev2=rev2*10+n%10;
            n=n/10;
        }
       sum=rev1+rev2;
        ans=0;
       while(sum!=0)
       {
           ans=ans*10+sum%10;
           sum=sum/10;
       }
        cout<<ans<<endl;
    }
}
