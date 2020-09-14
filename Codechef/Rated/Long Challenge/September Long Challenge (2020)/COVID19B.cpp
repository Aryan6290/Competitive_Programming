#include<bits/stdc++.h>
using namespace std;
	int n;
	int B[5];
	int A[5];
	
int total_inf(int value,int a,float key){
	int count=0;
    float z;
    for(int j=0;j<n;j++){
        if(a!=j){
            z=(float)(a-j)/float(A[j]-value);
            if(z>=key && z<=20 && B[j]==0 ){
              
                B[j]=1;
                total_inf(A[j],j,z);
            }
        }
    }
    for(int i=0;i<n;i++){
    	if(B[i]==1){
    		count++;
		}
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int>v;
		int zero=0;
	
		cin>>n;
	
		for(int i=0;i<n;i++){
			cin>>A[i];
			if(A[i]==0){
				zero++;
			}
		}
		if(n<=3){		
		for(int i=0;i<n;i++){
				int count=0;
			for(int j=i;j<n;j++){
				if(A[j]<A[i]){
					count++;
				}
			}
			for(int j=i;j>=0;j--){
				if(A[i]<A[j])
				{
					count++;
				}
			
			}
			v.push_back(count);
		}
		sort(v.begin(),v.end());
		int l=v.size();
		cout<<v[0]+1<<" "<<v[l-1]+1<<endl;
			
		}
		else
  	  {
  	  	vector<int>v;
		
			memset(B,0,sizeof(B));
			for(int i=0;i<n;i++){
				float key=0;
				for(int j=0;j<n;j++){
					if(i==j){
						B[j]=1;
					}
					else
					{
						B[j]=0;
					}
				}
				int inf=total_inf(A[i],i,key);
				v.push_back(inf);
			
		
				
			}
				sort(v.begin(),v.end());
				cout<<v[0]<<" "<<v[v.size()-1]<<endl;
		}
		
  
		
		
			
			
		}
	
	
}
					
