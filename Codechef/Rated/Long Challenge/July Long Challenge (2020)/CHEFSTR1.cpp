#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long long int count=0;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        
	    }
	    for(int i=0;i<n-1;i++){
	        count+=(abs(A[i]-A[i+1])-1);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
