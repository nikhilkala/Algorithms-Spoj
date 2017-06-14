#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		char str1[100001],str2[100001],str3[100001],ch1,ch;
		int i,j,num1=0,num2=0,num3=0,flag=0;
	scanf("%s %c %s %c %s",&str1,&ch,&str2,&ch1,&str3);		
		for(i=0;str1[i]!='\0';i++)
			{
				if(str1[i]=='m')
				{
					for(j=0;str2[j]!='\0';j++)
						num2 = num2*10 + str2[j] - 48;
					for(j=0;str3[j]!='\0';j++)
						num3 = num3*10 + str3[j] - 48;
					num1 = num3 - num2;
				flag=1;
					break;
				}
			}
			for(i=0;str2[i]!='\0' && flag==0;i++)
			{
				if(str2[i]=='m')
				{
					for(j=0;str1[j]!='\0';j++)
						num1 = num1*10 + str1[j] - 48;
					for(j=0;str3[j]!='\0';j++)
						num3 = num3*10 + str3[j] - 48;
					num2 = num3 - num1;
					break;
				}
			}
			for(i=0;str3[i]!='\0' && flag==0;i++)
			{
				if(str3[i]=='m')
				{
					for(j=0;str2[j]!='\0';j++)
						num2 = num2*10 + str2[j] - 48;
					for(j=0;str1[j]!='\0';j++)
						num1 = num1*10 + str1[j] - 48;
					num3 = num1 + num2;
					break;
				}
			}
			printf("%d + %d = %d\n",num1,num2,num3);
	
		
		
		
		
		
	}
	return 0;
}
