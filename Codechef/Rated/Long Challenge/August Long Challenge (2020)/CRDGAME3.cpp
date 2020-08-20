#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int res=ceil(double(n/9.0));
		int res2=ceil(double(k/9.0));
	//	cout<<res<<" "<<res2<<endl;
		if(res==res2)
		{
			cout<<1<<" "<<res<<endl;
		}
		else if(res>res2){
			cout<<1<<" "<<res2<<endl;
		}
		else
		cout<<0<<" "<<res<<endl;
		
		
	}
}