#include<bits/stdc++.h>
using namespace std;
int main(){
		 ios_base::sync_with_stdio(0);
    cin.tie(0);
	 cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
	
		int l=0,r=0,u=0,d=0;
		int q,x1,y1;
		cin>>x1>>y1;
		cin>>q;
		
			int res=s.length();
		for(int i=0;i<res;i++){
			if(s[i]=='L')
			{
				l++;
			}
			else if(s[i]=='R')
			{
				r++;	
			}
				else if(s[i]=='U')
			{
				u++;	
			}
				else if(s[i]=='D')
			{
				d++;	
			}
		}
	//	cout<<l<<r<<u<<d<<endl;
		while(q--){
				int flag=0;
				int x2,y2;
			cin>>x2>>y2;
			int dis1=x2-x1;
			int dis2=y2-y1;	
			if((dis1<0 && l<abs(dis1)) || (dis2<0 && d<abs(dis2) ) || (dis1>0 && r<abs(dis1)) ||(dis2>0 && u<abs(dis2) ) )	
			{
				flag=-1;
			}
			if(flag==-1)
			{
				cout<<"NO"<<"\n";
			}
			else
			{
				
				cout<<"YES"<<" "<<abs(dis1)+abs(dis2)<<"\n";
				}	
		}
	}
}