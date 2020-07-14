#include <iostream>
using namespace std;
 int getSum(int n) 
    {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
 } 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int counter1=0;
	    int counter2=0;
	    while(n--)
	    {
	        int a,b;
	        cin>>a>>b;
	        if(getSum(a)==getSum(b))
	        {
	            counter1++;
	            counter2++;
	        }
	        else if(getSum(a)>getSum(b))
	        {
	            counter1++;
	        }
	        else
	        {
	            counter2++;
	        }
	    }
	    if(counter1==counter2)
	    {
	        cout<<2<<" "<<counter1<<endl;
	    }
	    else if(counter1>counter2)
	    {
	        cout<<0<<" "<<counter1<<endl;
	    }
	    else
	    {
	        cout<<1<<" "<<counter2<<endl;
	    }
	    
	}
	return 0;
}
