#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll,ll>
#define mi map<int,int>
#define m(a,b) map<a,b>
#define rep(i,n) for(int i=1;i<=n;i++)
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;continue;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main()
{
	fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi A;
        rep(i,n){
            int x;
            cin>>x;
            A.pb(x);
        
        }
        
            int count=1;
            for(int i=1;i<n;i++){
            	if(i<=5){
            		int flag=0;
            		for(int j=i-1;j>=0;j--){
            			if(A[i]>A[j])
            			{
            				flag=-1;
						}
					}
					if(flag==0){
						count++;
					}
				}
				else
				{
					int flag=0;
					for(int j=i-5;j<i;j++){
						if(A[i]>A[j])
            			{
            				flag=-1;
						}
						
					}
					if(flag==0){
						count++;
					}
				}
            	
                
            }
            cout<<count<<endl;
        
    }
    
}