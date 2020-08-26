#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>n>>m;
		int count1=0;
		long long int A[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>A[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int count=0;
				int u,v,w,x;
				u=v=i;
				w=x=i;
				while(u>=0 && v<n && w>=0 && x<m && A[u][j]==A[v][j] && A[i][w]==A[i][x] )
				{
					count++;
					u--;
					v++;
					w--;
					x++;
					
				}
				count1+=count;
				
			}
		
		}
		cout<<count1<<endl;
	}
}
