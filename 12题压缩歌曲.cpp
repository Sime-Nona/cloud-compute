#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;cin>>n>>m;
	int a[n],b[n],c[n];
	int s1=0,s2=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=a[i]-b[i];
		s1=s1+a[i];//原 
		s2=s2+b[i];//压缩歌曲总大小 
	}
	int u=0;
	if(s2>m)
	cout<<"-1"<<endl; 
	else if(s1<=m)cout<<u<<endl;
	else if(s1>m)
	{
		sort(c,c+n);
		for(int i=n-1;i>=0;i--)
		{
			s1=s1-c[i];
			if(s1<=m)
			{
				cout<<n-i<<endl;
				break;
			}
		}
	}
	return 0;
 } 
