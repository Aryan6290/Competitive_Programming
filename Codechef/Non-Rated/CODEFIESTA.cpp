#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unsigned long long int ans=0;
		for(int i=1;i<=n;i++){
			ans+=i;
			
		}
		int A[n-1];
		for(int i=0;i<n-1;i++){
			cin>>A[i];
			ans-=A[i];
		}
		cout<<ans<<endl;
		
	}
}
