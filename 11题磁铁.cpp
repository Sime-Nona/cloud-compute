#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;cin>>n;
	string s1,s2;
	int sum=1;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		if(i!=0&&s1[0]==s2[1])
		sum++;
		s2=s1;
	}
	cout<<sum<<endl;
	return 0;
 } 
