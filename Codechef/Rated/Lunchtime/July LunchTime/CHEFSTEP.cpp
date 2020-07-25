#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int A[n];
	
		vector<int>ans;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			if(A[i]%k!=0)
			{
				A[i]=0;
			}
			else
			A[i]=1;
		}
			for(int i=0;i<n;i++)
		{
			cout<<A[i];
		}
		cout<<endl;
		
	}
}
