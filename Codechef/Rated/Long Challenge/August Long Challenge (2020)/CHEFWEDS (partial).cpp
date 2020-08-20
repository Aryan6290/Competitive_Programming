#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int table=1;
		 set <int, greater <int> > s1;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			if(s1.find(A[i])!=s1.end())
			{
				table++;
				s1.clear();
				s1.insert(A[i]);
			}
			else
			{
					s1.insert(A[i]);
			
			}
			
		}
		cout<<table<<endl;
		
		
	}
}