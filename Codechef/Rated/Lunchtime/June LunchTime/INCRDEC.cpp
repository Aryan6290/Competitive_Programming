#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m;
            map<int, int>::iterator itr; 
            int flag=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(m.find(x)==m.end())
            {
                m[x]=1;
            }
            else
            {
                m[x]++;
            }
            
        }
           for (itr = m.begin(); itr != m.end(); ++itr) { 
            int y=itr->second;
            if(y>1)
            {
                flag=-1;
                break;
            }
    } 
    if(flag==-1)
    {
        cout<<"NO"<<endl;
       
    }
    else
    {
    	cout<<"YES"<<endl;
    	 sort(v.begin(),v.end());
    	    for(int i=0;i<n;i++){
    	    	cout<<v[i]<<" ";
    	    }
    	    cout<<endl;
	}
    }
}
