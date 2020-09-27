//abhiquanta helped 
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ ;
		int n,i,j,A[100];
		cin>>n;
		int good=n;
		for(i=0;i<n;i++)
		{
			cin>>A[i];
				
			
		}
		for(i=0;i<n;i++)
		{
			for(j=i-1; j>=i-5 && j>=0;j--)
			if(A[i]>=A[j])
			{
				good--;
				break;
			}
			
		}
		cout<<good<<endl;
	}
	
	return 0;
}