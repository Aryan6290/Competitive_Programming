#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int A[129];
	A[0]=0;
	
	for(int i=1;i<129;i++){
			int flag=0;
			int l=0;
			int key=A[i-1];
		for(int j=0;j<i-1;j++){
			if(A[j]==key)
			{
				l=j;
				flag=1;
			}
			
			
		}
		if(flag==1)
		{
			A[i]=(i-1)-l;
		}
		else
		{
			A[i]=0;
		}
	}
	for(int i=0;i<10;i++){
	cout<<A[i]<<" ";	
	}
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		int key=A[n-1];
		for(int i=0;i<n;i++)
		{
			if(A[i]==key)
			{
				ans++;
			}
		}
		
		cout<<ans<<endl;
		
		
		
		
	}
	
	
	
}
