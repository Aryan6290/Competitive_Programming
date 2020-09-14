#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       string s="";
       for(int i=0;i<n;i++){
       	s+='0';
	   }
    
    
	  // cout<<s<<endl;
        unsigned long long int res =(n*(n+1))/2;
        int res2=res/2;
        int sum=0;
      
        for(int i=n;i>0;i--){
          if(sum>=0){
          	sum-=i;
          	s[i-1]='1';
		  }
		  else
		  {
		  	sum+=i;
		  	s[i-1]='0';
		  }
            
        }
        cout<<res%2<<endl;
       cout<<s<<endl;
        
		
    
    }
}
