#include<bits/stdc++.h>
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	 map<int, int> m1,m2,m;
	  map<int, int>::iterator itr; 
	 
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
	int n,k,x,y;
	cin>>n>>k>>x>>y;
	for(int i=1;i<=n;i++){
		
	
	
		if((x+ i*k)%n==y)
		{
			flag=-1;
			break;
			
		}
	}
		if(flag==-1)
		{
			cout<<"YES"<<endl;
		}
			else
		cout<<"NO"<<endl;
	
	}
	
}