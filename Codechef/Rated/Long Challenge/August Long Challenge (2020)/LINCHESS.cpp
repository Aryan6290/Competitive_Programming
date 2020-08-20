#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long int min=INT_MAX;
		int min2=0;
		vector<int>v1;
		int count=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(k%x==0){
				count=1;
				if(min>((k/x)))
				{
//					cout<<((k/x))<<endl;
					min=((k/x));
					min2=x;
				
					
					}	
			}
		}
		if(count==0)
			cout<<-1<<endl;
		else
		cout<<min2<<endl;
	
		
		
		
	}
	
	
}