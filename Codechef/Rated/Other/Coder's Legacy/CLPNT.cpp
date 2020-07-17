#include<bits/stdc++.h>
using namespace std;
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
int pointIsOnLine(int x, int y, int z) //TAKEN FROM GFG AND MODIFIED
{ 
	// If (x, y) satisfies the equation of the line 
	if (z==(x+y) )
		return -1; 

	return 0; 
} 

int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	 
	 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		int flag=0;
		int count=0;
		cin>>n;
		set <int, greater <int> > s1; 
		map<int, int> m1,m2,m;
	  map<int, int>::iterator itr; 
		vector<long long int>v;
		
		for(int i=0;i<n;i++){
		  int x;
		  cin>>x;
		  v.push_back(x);
		  s1.insert(x);
		}
	    int q;
	    cin>>q;
	    while(q--){
	   long long int x,y;
		cin>>x>>y;
		if(x==0 && y==0)
		{
		    cout<<0<<endl;
		}
		else
		{
			
			set <int, greater <int> > :: iterator itr = s1.find(x+y);
	if(itr!=s1.end())
	{
		cout<<-1<<endl;
	}
			else
			{
 std::vector<long long int>::iterator low1=lower_bound(v.begin(), v.end(), x+y); 
      
    // std :: lower_bound 
 //   low1 = std::lower_bound(v.begin(), v.end(), x+y); 
		cout<<low1-v.begin()<<endl;
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
	
}
}
