#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		int ans=0;
		int q;
		cin>>n>>m>>q;
		int A[n],B[m];
			for(int i=0;i<n;i++){
				A[i]=0;
			}
				for(int i=0;i<m;i++){
			B[i]=0;
			}
		
		
		while(q--){
			int x,y;
			cin>>x>>y;
			A[x-1]++;
			B[y-1]++;
		
			
		}
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((A[i]+B[j])%2!=0)
				{
					ans++;
				}
	//			cout<<A[i][j]<<" ";
			}
	//		cout<<endl;
			
	}
//	for(int i=0;i<n;i++){
//				cout<<A[i]<<" ";
//			}
//			cout<<endl;
//				for(int i=0;i<m;i++){
//				cout<<B[i]<<" ";
//			}
//			cout<<endl;
		cout<<ans<<endl;
		
	}
}
