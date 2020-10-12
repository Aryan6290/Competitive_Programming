
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo (int x) 
{ 
    /* First x in the below expression is for the case when x is 0 */
    //Taken from gfg
    return x && (!(x&(x-1))); 
} 
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
		int n,x,p,k;
		cin>>n>>x>>p>>k;
		vector<int>A;
		for(int i=0;i<n;i++){
			int ans;
			cin>>ans;
			A.push_back(ans);
		}
		sort(A.begin(),A.end());
		if(A[p-1]==x)
		{
			cout<<0<<endl;
		}
		else if(k>=p && A[p-1]>=x)
		{
			A[p-1]=x;
			sort(A.begin(),A.end());
				if(A[p-1]==x)
				{
					cout<<1<<endl;
				}
				else
				{
						int high= (upper_bound (A.begin(), A.end(), x))- A.begin();
					//	cout<<high<<endl;
						cout<<(p-1)-(high-1)+1<<endl;
				}
			
		}
		else if(p>=k && A[p-1]<=x){
				A[p-1]=x;
				sort(A.begin(),A.end());
					if(A[p-1]==x)
					{
					//	cout<<"bruh"<<endl;
						cout<<1<<endl;
					}
					else
					{
						int low= (lower_bound (A.begin(), A.end(), x))- A.begin();
					//	cout<<low<<endl;
						cout<<low-(p-1)+1<<endl;
					}		
		}
		else
		cout<<-1<<endl;
	}
		
	
	}
	
