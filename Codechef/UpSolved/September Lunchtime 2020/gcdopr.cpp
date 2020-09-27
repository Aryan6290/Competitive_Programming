#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		int flag=0;
		int sum=0;
		for(int i=0;i<n;i++){
		cin>>A[i];
			if(((i+1)%A[i])!=0)
			{
				flag=-1;
			}
		}
		if(flag!=-1){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		
	}
}