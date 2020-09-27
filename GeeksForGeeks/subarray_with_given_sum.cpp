#include<bits/stdc++.h>
using namespace std;
int findAnswer(long long int A[],long long int n, long long int s){
	int start=0,end=0;
	bool flag=false;
	long long int sum=A[0];
	while(start<n && end<n){
		if(sum==s){
			cout<<start+1<<" "<<end+1<<endl;
			flag=true;
			break;
		
		}
		 if(sum>s)
		{
			sum=sum-A[start];
			start++;
		}
		else{
				end++;
			if(end<n){
				sum+=A[end];
			}
		
		}
		
		
		
	}
	if(flag==false)
	cout<<-1<<endl;

	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,s;
			cin>>n>>s;
		long long int A[n];		
		long long int sum=0;
		for(int i=0;i<n;i++){	
			cin>>A[i];
		}
		findAnswer(A,n,s);
		
		
	
		
	}
}