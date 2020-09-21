#include<bits/stdc++.h>
using namespace std;
#define long long ll
int gcd(int a, int b)
 {
    return (a == 0) ? b : gcd(b % a, a);
}

bool isPrime(int a) 
{
	int c = 0;
	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			return false; break;
		}
	}
	return true;
}
int checkPrimeNumber(int n)
{
	bool flag = false;

	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
	return flag;
}
int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	 map<int, int> m1,m2,m;
	 map<int,int>::iterator itr;
	 int count=0;
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		int k;
		int l;
		cin>>n>>k>>l;
		int s;
//		int A[n];
//		for(int i=0;i<n;i++){
//			cin>>A[i];
//	
		if(k==1){
			if(n==1){
				cout<<1<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else
		{
			if(l*k>=n){
				int ans=1;
				for(int i=1;i<=n;i++){
				
					if(ans>k)
					{
						ans=1;
					}
					cout<<ans<<" ";
					ans++;
				}
				cout<<endl;
			}
			else
			cout<<-1<<endl;
		}
		
		
		
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
	