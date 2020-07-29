#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int sum=0;
		int zero_count=0,two_count=0;
		int n;
		cin>>n;
		int x;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x==2)
			{
				two_count++;
			}
			if(x==0)
			{
				zero_count++;
			}
			v.push_back(x);
		}
		
		sum=two_count*(two_count-1)/2 +zero_count*(zero_count-1)/2;
		cout<<sum<<endl;
		
		
		
		
	}
}
