#include<bits/stdc++.h>
using namespace std;

int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
		}
		if(n<=5)
		{
			cout<<n<<endl;
		}
		else
		{
			int sum=n;
			while(n>=6)
			{
				n=n/2;
				sum+=n;
			}
			cout<<sum<<endl;
		}
	}
	
}