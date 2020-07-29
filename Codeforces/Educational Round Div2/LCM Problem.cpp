#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
 int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}
 int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x+1==y)
		{
			
			if(lcm(x,y)>y)
			{
				
				cout<<-1<<" "<<-1<<endl;
			}
			else
			{
				cout<<x<<" "<<y<<endl;
			}
		}
		else 
		{
			if(x*2>y){
				cout<<-1<<" "<<-1<<endl;
			}
			else
			cout<<x<<" "<<x*2<<endl;
		}
	}
}
