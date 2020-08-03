#include<bits/stdc++.h>
using namespace std;
#define long long ll
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int ans_count=0;
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++)
		{
			int flag=0;
			if(i<5)
			{
				for(int j=0;j<i;j++){
					if(A[i]>=A[j])
					{
						flag=-1;
						break;
						
					}
					
				}
				if(flag==0){
					ans_count++;
//					cout<<i<<endl;
				}
			}
			else
			{
				for(int j=i-5;j<i;j++){
						if(A[i]>=A[j])
					{
						flag=-1;
						break;
						
					}
					
				}
				if(flag==0){
					ans_count++;
//					cout<<i<<endl;
				}
				}
			}
			cout<<ans_count<<endl;
		}
		
	}

