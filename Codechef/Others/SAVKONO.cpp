#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    int z;
    int x;
    
       cin>>n>>z;
        int hash[10003];
        memset(hash,0,sizeof(hash));
        for(int i=0;i<n;i++)
        {
            cin>>x;
            hash[x]++;
        }
        int ans=0;
        for(int i=10002 ; i>0 ; i--)
        {
            while(hash[i] && z>0)
            {
                z=z-i;
                hash[i]--;
                hash[i/2]++;
                ans++;
            }
            if(z<=0)
            break;
        }
        
        if(z<=0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"Evacuate"<<"\n";
        }
    	
    }
}
