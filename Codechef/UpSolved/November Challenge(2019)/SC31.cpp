#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		n--;
		int ans=0;
		while(n--){
			string s1;
			cin>>s1;
			for(int i=0;i<10;i++)
			{
				if(s[i]==s1[i])
				{
					s[i]='0';
				}
				else
				{
					s[i]='1';
				}
			}
		}
			for(int i=0;i<10;i++)
			{
				if(s[i]=='1')
				ans++;	
				
			}
			cout<<ans<<endl;
		
		
	}
}
