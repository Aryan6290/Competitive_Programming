#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		int flag=0;
		int sum=0;
		for(int i=0;i<n;i++){
		cin>>A[i];
			sum+=A[i];
		}
		if(sum>=0){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		
	}
}