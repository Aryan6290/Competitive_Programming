#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		long long int n,k;
		cin>>n>>k;
		
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
				for(int i=0;i<=k%(3*n);i++){
		A[i%n]=A[i%n]^A[n-1-(i%n)];
		}
		
		if(k>n/2 && k/2!=0)
		{
			A[n/2]=0;
		}
			for(int i=0;i<n;i++){
			cout<<A[i]<<" ";
		}
		
		
	}
}
