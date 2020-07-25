#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int m;
		int x,y;
		cin>>n>>m>>x>>y;
	long long 	int res=n*m;
		if(res==1)
		{
			cout<<x<<endl;
		}
		else
		{
		
		if(2*x<y)
		{
			long long int ans=res*x;
			cout<<ans<<endl;
		}
		else if(x==y)
		{
			if(res%2==0)
			{
			long long	int ans=((res/2))*x;
				cout<<ans<<endl;
			}
			else
			{
			long long	int	ans=((res/2)+1)*x;
				cout<<ans<<endl;
			}
		}
		else if(y<x)
		{
			
			if(res%2==0)
			{
				long long int anss=(res/2)*y;
				cout<<anss<<endl;
			}
			else
			{
				long long int ans=((res/2)+1)*y;
				cout<<ans<<endl;
			}
		}
		else
		{
			if(res%2==0)
			{
			long long int ans=	(res/2)*x + (res/2)*(y-x);
				cout<<ans<<endl;
			}
			else
			{
			long long int ans=	((res/2)+1)*x +(res/2)*(y-x);
				cout<<ans<<endl;
			}
		}
	}
	}
}
