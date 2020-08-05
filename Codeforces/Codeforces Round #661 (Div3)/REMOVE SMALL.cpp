#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int flag=0;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			for(int i=0;i<n-1;i++){
			if(abs(A[i]-A[i+1])>1)
			{
				flag=-1;
				break;
			}
		}
		if(flag==0){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		}
		
	}
}
