#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int sum=0;
		vector<int> v(9, 0); 
	
		int n;
		cin>>n;

		while(n--){
			int x,y;
			cin>>x>>y;
			if(x<9)
			{
				if(y>v[x])
				
					v[x]=y;
				}
			}
			
		
		
		for(int i=0;i<9;i++){
			sum+=v[i];
		}
		cout<<sum<<endl;
			
		}
	}


