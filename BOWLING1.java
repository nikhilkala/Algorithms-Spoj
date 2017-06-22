/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(br.readLine());
while((t--)!=0)
{
int arr[]=new int[21];
int i,cnt=0;
int turn=1,frame=1;
int ans=0;
int fr[]={0,0,0,0,0,0,0,0,0,0,0};
String str;
str=br.readLine();
StringTokenizer st=new StringTokenizer(str);
cnt=st.countTokens();
for(i=0;i<cnt;i++)
		{
			arr[i]=Integer.parseInt(st.nextToken());
		}

	for(i=0;i<cnt;i++)
	{
		if (frame!=10)
	{
		if(turn==1)
		{
			if(arr[i]<10)
			{
			fr[frame]+=arr[i];
			turn++;
			}
			else
			{
			fr[frame]+=arr[i]+arr[i+1]+arr[i+2];	
			frame++;
			}
			
		}
		else
		{
		if((arr[i-1]+arr[i])<10)
		{
			fr[frame]+=arr[i];
			turn=1;
			frame++;
		}
		else
		{
			fr[frame]+=arr[i]+arr[i+1];
			turn=1;
			frame++;
		}
		}
	}
	else  if(frame==10)
	{
		if(turn==1)
		{
		fr[frame]+=arr[i];
		turn++;
		}
		else if(turn==2)
		{
		fr[frame]+=arr[i];
		turn++;
		}
		else
		fr[frame]+=arr[i];
	}
	}
for(i=1;i<=10;i++)	
ans+=fr[i];
System.out.println(ans);
	}
}
}
