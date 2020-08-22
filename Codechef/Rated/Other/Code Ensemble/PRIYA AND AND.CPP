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
		string s;
		int flag=0;
		int count=0;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((A[i] & A[j])==A[i])
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
		
		
		
		
		
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