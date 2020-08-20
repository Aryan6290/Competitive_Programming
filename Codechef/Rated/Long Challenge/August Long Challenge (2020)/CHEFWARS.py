t=int(input())

for z in range (t):
     p,k = map(int,input().split())
     while(k>0 and p>0):
         p=p-k;
         k=k//2;

     if(p<=0):
         print(1)
     else:
         print(0)