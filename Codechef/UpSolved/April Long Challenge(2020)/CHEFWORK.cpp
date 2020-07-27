#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int n;
        cin>>n;
        int A[n];
        int B[n];
       	int max1=1000000000,max2=1000000000,max3=1000000000;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
          
        }
        for(int i=0;i<n;i++)
        {
        if(B[i]==1)
        {
        	if(A[i]<max1)
        	{
        		max1=A[i];
			}
		}
		if(B[i]==2)
        {
        	if(A[i]<max2)
        	{
        		max2=A[i];
			}
		}
		if(B[i]==3)
        {
        	if(A[i]<max3)
        	{
        		max3=A[i];
			}
		}
		}
		if((max1+max2)<=max3)
		{
			cout<<max1+max2<<endl;
		}
		else
		cout<<max3<<endl;
	
            
        
    
}
