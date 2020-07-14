#include <iostream> 
#include <iterator> 
#include <map> 
#include<algorithm>

using namespace std;

//TAKEN FROM GEEKSFORGEEKS 
// C++ program to find given two array 
// are equal or not 
#include <bits/stdc++.h> 
using namespace std; 
  




int main()
{
	int t;
	cin>>t;
	while(t--){
		int rem=1000000000;
		int n;
		cin>>n;
		int x;
		vector<int>A,B;
		
		
		map<int, int>m,m1,m2;

		map<int, int>::iterator itr;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			rem=min(rem,x);
			A.push_back(x);
		//	freq1[x]++;
			
		
			
		}
			for(int i=0;i<n;i++)
		{
			cin>>x;
			rem=min(rem,x);
			B.push_back(x);
//		freq2[x]++;
			
			
		}
		for(int i=0;i<n;i++){
			m[A[i]]++;
			m1[A[i]]++;
		}
		for(int i=0;i<n;i++){
			m[B[i]]++;
			m2[B[i]]++;
		}
			int flag=0;
	
		for(itr=m.begin();itr!=m.end();++itr){
			if((itr->second)%2!=0)
			{
				flag=-1;
			}
			
		}
		if(flag==-1)
		{
			cout<<-1<<endl;
		}
		else
		{
			vector<int>v1;
			vector<int>v2;
			for(itr=m1.begin();itr!=m1.end();itr++)
			{
				int res=itr->first;
				map<int, int>::iterator pos=m2.find(itr->first);
				if(pos==m2.end())
				{
					while(itr->second--)
					{
						v1.push_back(res);
					}
				}
				else
				{
					int res2=pos->first;
					if((itr->second)-(pos->second)>0)
					{
						int remain=(itr->second)-(pos->second);
					
					while(remain--)
					{
						v1.push_back(res);
					}
				}
				}
			}
				for(itr=m2.begin();itr!=m2.end();itr++)
			{
				int res=itr->first;
				map<int, int>::iterator pos=m1.find(itr->first);
				if(pos==m1.end())
				{
					while(itr->second--)
					{
						v2.push_back(res);
					}
				}
				else
				{
					int res2=pos->first;
					if((itr->second)-(pos->second)>0)
					{
						int remain=(itr->second)-(pos->second);
					
					while(remain--)
					{
						v2.push_back(res);
					}
				}
				}
			}
//			for(int i=0;i<10;i++)
//			{
//			cout<<freq1[i]<<" ";	
//				
//			}
//			cout<<endl;
//			for(int i=0;i<10;i++)
//			{
//			cout<<freq2[i]<<" ";	
//				
//			}
//			cout<<endl;	
//			
			
//			for(int i=0;i<200001;i++)
//			{
//				int z=abs(freq1[i]-freq2[i]);
//				if(freq1[i]<=freq2[i])
//				{
//					while(z--)
//					{
//						v1.push_back(i);
//					}
//				}
//				else
//				{
//					while(z--)
//					{
//						v2.push_back(i);
//					}
//				}
//			}
			if(v1.size()==0){
				cout<<0<<endl;
			}
			else
			{
				sort(v1.begin(),v1.end());
				sort(v1.begin(),v1.end(),greater<int>());
			long long int ans=0;
				for(int i=0;i<v1.size();i++){
					ans+=min(2*rem,min(v1[i],v2[i]));
				}
				cout<<ans/2<<endl;
			}

			
		
			
		}
		
		
		
		
	}
}		
