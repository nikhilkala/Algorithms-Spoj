#include <bits/stdc++.h>
    using namespace std;
    	long long int ans=0;
    	void merge(long long int arr[],long long int l ,long long L[],long long int m ,long long R[])
    	{
    	// long long int n1=m-l+1;
    	// long long int n2=r-m;
    	 long long int i,j,k;
    	// long long int L[n1];
    	// long long int R[n2];
    	// for(i=0;i<n1;i++)
    	// L[i]=arr[l+i];
    	// for(j=0;j<n2;j++)
    	// R[j]=arr[m+1+j];
    	i=0;
    	j=0;
    	k=0;
    	while(i<l && j<m)
    	{
    		if(L[i]<=R[j])
    		arr[k++]=L[i++];
    		else
    		{
    			arr[k++]=R[j++];
    			ans=(ans+l-i)%10000007;
    		}
 
    	}
    	while(i<l)
    	{
    	arr[k++]=L[i++];
    	}
    	while(j<m)
    	arr[k++]=R[j++];
    	return;
    	}
    void mergesort (long long int arr[], long long int r)
    {
    if(r>1)	
    {
 
     long long int m= r/2,i;
    	long long L[m],R[r-m];
    	for(i=0;i<r;i++)
    	{
    		if(i<m)
    			L[i] = arr[i];
    		else
    			R[i-m] = arr[i];
    	}
    mergesort(L,m);
    mergesort(R,r-m);
    merge(arr,m,L,r-m,R);
    }
    }
 
 
 
    int main() 
    {
    long long int q,t;
    cin>>t;
    for(q=1;q<=t;q++)
    {
    long long int i,n;
    cin>>n;
    ans=0;
    long long int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    mergesort (arr,n);
    // for(i=0;i<n;i++)
    // cout<<arr[i];
    cout<<"Case "<<q<<": "<<ans%10000007<<endl;
 
    }
    	return 0;
    }
