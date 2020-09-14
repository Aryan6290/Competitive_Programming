#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<int,int>m1,m2;
		int key=0;
		  map<int, int>::iterator itr; 
		  int maxo=INT_MIN;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(m1.find(x)==m1.end()){
				m1[x]=1;
			}
			else
			{
				m1[x]++;
			}
		}
		for(itr=m1.begin();itr!=m1.end();itr++){
			if(m2.find(itr->second)==m2.end()){
				m2[itr->second]=0;
			}
			else
			{
				m2[itr->second]++;
			}
		//	cout<<itr->second<<" ";
			
		}
	//	cout<<endl;
			for(itr=m2.begin();itr!=m2.end();itr++){
			if((itr->second)>maxo){
				maxo=itr->second;
				key=itr->first;
			}
			
		}
		cout<<key<<endl;
		
		
	}
}
