#include<bits/stdc++.h>
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	 map<int, int> m1,m2,m;
	  map<int, int>::iterator itr; 
	 
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		int counter=0;
	    long long int n,k,sum2=0,sum=0;
		cin>>n>>k;
	long long  int A[n];
		for(int i=0;i<n;i++)
		{
		    cin>>A[i];
		    sum2+=A[i];
		}
	
	for(int i=0;i<n;i++){
		sum+=A[i];
		
		if(sum<k)
		{
		
			flag=-1;
			cout<<counter+1<<endl;
			break;
		}
			counter++;
		sum-=k;
	}
	if(flag!=-1){
		cout<<1+ counter + sum/k<<endl;
	}
	    
	
		
		
		
//		if()
//		{
//			cout<<   << endl;
//		}
//		else
//		{
//			cout<<  <<endl;
//		}
		
	}
	
}