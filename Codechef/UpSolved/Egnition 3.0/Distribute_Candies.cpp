#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        int sum=0;
        for(int i=0;i<n;i++){
           int a,c;
           cin>>a>>c;
           sum+=c;
        }
       if(n>=sum && sum!=0){
           cout<<n%sum<<endl;
       }
       else
       {
           cout<<abs(sum-n)<<endl;
       }
    }
    
}