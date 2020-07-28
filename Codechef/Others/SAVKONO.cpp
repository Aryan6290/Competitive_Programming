#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    int p;
    cin>>n>>p;
    int A[n];
    for(int i=0;i<n;i++){
    	cin>>A[i];
	}
	sort(A,A+n);
	int key=0;
	while(p>0)
	{
	p=p-A[n-1];
	A[n-1]=A[n-1]/2;
	sort(A,A+n);
	key++;
	
	}
	cout<<key<<endl;
    	
    }
}
