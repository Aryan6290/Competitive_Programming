#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int res=1;
		cin>>n;
		unsigned	long long int  A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
	unsigned	long long int B[n];
	
		
		
		for(int i=n-1;i>=0;i--)
		{
			B[i]=res%1000000007;
			res=(res*2)%1000000007;
		}
		
	//	sort(B,B+n);
	
//		for(int i=0;i<n;i++){
//			A[i]=(B[A[i]-1])%1000000007;
//			}
//			
		
		for(int i=0;i<n;i++){
		cout<<B[i]<<" ";
		}
		cout<<endl;
	
	
	
	}
}