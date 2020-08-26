#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        String s;
        cin>>s;
        int ones=0,zeroes=0;
        for(int i=0;i<n;i++){
            of(s[i]=='1')
            {
                ones++;
            }
            else
            {
                zeroes++;
            }
        }
        int ratio=n/k;
        if(ones%ratio!=0 || zeroes%ratio!=0){
            cout<<"Impossible"<<endl;
        }
        else
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        
    }
}