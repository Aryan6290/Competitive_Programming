#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int t;
	cin>>t;
	int N;

	while(t--)
	{
	   unsigned	long long int A=0,B=0,C=0,D=0,E=0,S=0;
		int ans;
		cin>>N;
		cin>>A;
		S=2*(long long int)(pow(10,N))+A;
		cout<<S<<endl;
		cin>>B;
		C=(long long int)(pow(10,N))-B;
		cout<<C<<endl;
		cin>>D;
		E=(long long int)(pow(10,N))-D;
		cout<<E<<endl;
		cin>>ans;
		if(ans==-1)
		{
		 return 0;
		}
	}
}
