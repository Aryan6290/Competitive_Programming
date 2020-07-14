#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	long long	int sabseBada=0; //irony xDDDD
	    long long int n,x;
	    cin>>n>>x;
	    vector<long long int> A;
	    for(int i=0;i<n;i++)
	    {
	      long long  int rem;
	        cin>>rem;
	        A.push_back(rem);
	        
	        sabseBada=max(sabseBada,rem);
	    }
	    sort(A.begin(),A.end());
	    int s=1;
	     
	    
	   
        if(x>=sabseBada)
	    {
	        cout<<n<<endl;
	        
	    }
	    else if(A[0]==A[n-1])
	    {
	       	        unsigned long long int count=0;
	        for(int i=1;i<32;i++)
	        {
	            if(x*pow(2,i)>=A[0])
	            {
	                count=i;
	                break;
	            }
	        }
	        cout<<count+(n)<<endl;
	    }
	    else
	    {
	    	
	    long long 	int d=0;
	    long long 	int vac=x;
	    	
	    	vector<long long int>::iterator lower; 
   			 lower = lower_bound (A.begin(), A.end(), x);
   			 
				  
   			 
   			 
   	long long 		 int res=lower-A.begin();
  
   			 
   			 for(int i=res;i<n;i++)
   			 {
   			 	
   			//	cout<<A[i]<<endl;
   			 	if(vac<A[i])
   			 	{
   			 		
					while(vac<A[i])
					{
						
						vac=2*vac;
						d++;
					
					
					}
					d++;
				
   			 	
				}
				else
				{
				
					d++;
				}
					vac=2*(A[i]); //previous day vac
			}
				long long	int ans=d+res;
			if(res==0)
			{
				cout<<ans<<endl;
			}
			else
			{
			
		long long	int ans=d+res;
			
			
		long long	int d2=0;
			res=res-1;
			for(int i=res;i<n;i++)
			{
					if(x<A[i])
   			 	{
   			 		
					while(x<A[i])
					{
						
						x=2*x;
						d2++;
					
					
					}
					d2++;
				
   			 	
				}
				else
				{
				
					d2++;
				}
					x=2*(A[i]); //previous day vac
			}
		long long	int ans2=res+d2;
		
		
		
		
		if(ans<ans2)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<ans2<<endl;
		}
		}
		
   		
	    	
	    
		}
	}
	return 0;
}
