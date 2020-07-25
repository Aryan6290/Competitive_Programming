#include<bits/stdc++.h>
using namespace std;
  int getSum(int n) 
    {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
 } 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int ans2=0;
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		
		}
	 for (int i=0; i<n; i++) 
	 {
	 
      for (int j=i+1; j<n; j++) 
      {
      	int res=A[i]*A[j];
      	int ans=getSum(res);
      	if(ans>ans2){
      		ans2=ans;
		  }
	  }
	}
		cout<<ans2<<endl;
			
		
	}
}
