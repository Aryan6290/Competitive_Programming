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
		int A[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				A[i][j]=0;
			}
			
			
		}
		
		while(q--){
			int x,y;
			cin>>x>>y;
			for(int i=0;i<m;i++){
				A[x-1][i]++;
			}
			for(int j=0;j<n;j++){
				A[j][y-1]++;
			}
		
			
		}
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(A[i][j]%2!=0)
				{
					ans++;
				}
	//			cout<<A[i][j]<<" ";
			}
	//		cout<<endl;
			
		}
		cout<<ans<<endl;
		
	}
}
