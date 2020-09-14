#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		long long int ans=0;
		int A[n];
		memset(A, 0, sizeof(A));
		while(q--){
			int l,r,v;
			cin>>l>>r>>v;
			ans+=(r-l+1)*v;
		}
	
		 cout<<ans<<endl;
		
		
	}
}
