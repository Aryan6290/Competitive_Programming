#include <bits/stdc++.h> 
using namespace std; 


// Converts A[][] to its transpose 


int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n][n];
		int s=0;
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		for(int k=n-1;k>=0;k--){
			if((A[0][k]==(k)*n+1) && (A[k][0]==k+1))
			{
				count++;
				int s=k;
				for (int i = 0; i <s; i++) 
			  {
        			for (int j = i+1; j < s; j++) 
        			{
					
          				  swap(A[i][j], A[j][i]); 
          			}
          	  }
			}
		}

	
		cout<<count-1<<endl;
	}
} 



//			for(int i=n-1;i>=0;i--){
//			for(int j=n-1;j>=0;j--){
//				cout<<A[i][j]<<" ";
//			}
//			cout<<endl;
//		}
	

