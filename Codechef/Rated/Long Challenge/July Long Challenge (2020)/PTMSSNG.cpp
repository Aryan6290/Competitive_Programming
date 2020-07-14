#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// empty set container 
    set <int, greater <int> > x;   
	set <int, greater <int> > y;  
	
		int n;
		cin>>n;
		int loop=4*n-1;
		while(loop--)
		{
			int x1;
			int y1;
			cin>>x1>>y1;
			if(x.find(x1)!=x.end())
			{
				x.erase(x1);
			}
			else
			{
				x.insert(x1);
			}
				if(y.find(y1)!=y.end())
			{
				y.erase(y1);
				
			}
			else
			{
				y.insert(y1);
			}
		}
		cout<<*(x.begin())<<" "<<*(y.begin())<<endl;
	}
}
