#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s,p;
		string ans="";
		string ans2="";
		cin>>s>>p;
		int n=s.size(),n2=p.size();
		int A[27];
			int B[27];
		memset(A,0,sizeof(A));

		for(int i=0;i<n;i++) 
		{
			A[s[i]-'a']++;
			
		}
		for(int i=0;i<n2;i++)
		{
			A[p[i]-'a']--;
		}
		for(int i=0;i<26;i++)
		B[i]=A[i];
		
		for(int i=0;i<=(p[0]-'a');i++)
		{   
			while(A[i]>0)
			{
				ans+=(char)(i+97);
				A[i]--;
				
			}
		
		}
		
		
		ans+=p;
		for(int i=0;i<26;i++)
		{
			while(A[i]>0)
			{
				ans+=(char)(i+97);
				A[i]--;
			}
		}
		
		for(int i=0;i<p[0]-'a';i++)
		{
			while(B[i]!=0)
			{
				ans2+=(char)(i+97);
				B[i]--;
			}
		}
		ans2+=p;
		for(int i=0;i<26;i++)
		{
			while(B[i]!=0)
			{
				ans2+=(char)(i+97);
				B[i]--;
			}
		}
		cout<<min(ans,ans2)<<endl;
	}
}
