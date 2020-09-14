#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int flag=0;
        int n;
        cin>>n;
         set <int, greater <int> > s;
         for(int i=0;i<n;i++){
             int x;
             cin>>x;
             if(x==0){
                 flag=-1;
                
                 
             }
              s.insert(x);
         }
             if(flag==0){
                 cout<<s.size()<<endl;
             }
             else
             {
                 cout<<s.size()-1<<endl;
             }
        
    }
}
