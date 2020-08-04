#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define cases int testcases;cin>>testcases; while(testcases--)
int Row[100005],Col[100005];
int32_t main()
{
    cases
    {
        int n,m,q,x,y;
        cin>>n>>m>>q;
        for(int i=1;i<=n;i++)
        {
                Row[i]=0;
        }
        for(int i=1;i<=m;i++)
        {
                Col[i]=0;
        }
   
        while(q--)
        {
            cin>>x>>y;
            Row[x]++;
            Col[y]++;
            Row[x]%=2;Col[y]%=2;
        }
        int a=0,b=0,c=0,d=0;
        for(int i=1;i<=n;i++)
        {
            if(Row[i]==1) a++;
            else b++;
        }
        for(int i=1;i<=m;i++)
        {
            if(Col[i]==1)c++;else d++;
        }
        int res= (a*d + b*c);
        cout<<res<<endl;
    }
    return 0;
}
