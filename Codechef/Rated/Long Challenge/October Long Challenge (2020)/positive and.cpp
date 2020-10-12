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
		int flag=0;
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
	}
	else if(isPowerOfTwo(n))
	{
		cout<<-1<<endl;
	}
	else if(n==3)
	{
		cout<<2<<" "<<3<<" "<<1<<endl;
	}else
	{
		vector<int> v1;
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(1);
		int i=4;
		while(i<=n){
			if(isPowerOfTwo(i))
			{
				v1.push_back(i+1);
				v1.push_back(i);
				i+=2;
			}
			else
			{
				v1.push_back(i);
				i++;
			}
		}
		for(int j=0;j<v1.size();j++){
			cout<<v1[j]<<" ";
		}
		cout<<endl;
	}
		
	
	
		
	}
		
	
	}
	
