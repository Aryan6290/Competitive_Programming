#include<bits/stdc++.h>
using namespace std;

int getMissingNo(long long int a[],long long int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,s;
			cin>>n;
		long long int A[n];		
		long long int sum=0;
		for(int i=0;i<n-1;i++){	
			cin>>A[i];
		}
		s=getMissingNo(A,n-1);
		cout<<s<<endl;
		
		
		
	
		
	}
}