#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char chess[8][8];
		for(int i=0;i<8;i++) //initialising the chess board
		{
			for(int j=0;j<8;j++)
			{
				chess[i][j]='X';
			}
		}
		
			for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(i==0 && j==0)
				{
					chess[i][j]='O'; //creating spaces for king to move
					n=n-1;
				}
				else if(n>0)
				{
					chess[i][j]='.';
					n--;
				}
			}
		}
		
		
		
			for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cout<<chess[i][j];
			}
			cout<<endl;
		}
	}
}
