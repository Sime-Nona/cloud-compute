#include <iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[n];
	//int m=(n*n-n)/2;
	int sum=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]==a[i])
			break;
		}
		if(j==-1||i==0)
		for(j=n-1;j>i;j--)
		{
			//if(j==n-1)sum++;
		//	else
		//	{
				int p;
				for(p=j+1;p<n;p++)
		    	{
		    		if(a[j]==a[p])
		    		break;
				}
				if(p==n)sum++;
		//	}
		}
	}
	cout<<sum<<endl; 
	return 0;
 } 
