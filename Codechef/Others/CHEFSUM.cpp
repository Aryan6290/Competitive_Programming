#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int max=100000000000;
    int n;
    cin>>n;
    int A[n];
    int sum=0;
    
    for(int i=0;i<n;i++){
    	cin>>A[i];
    	if(A[i]<max)
    	{
    		max=A[i];
    		sum=i;
		}
	}

	cout<<sum+1<<endl;
	  
	
    	
	}
}
