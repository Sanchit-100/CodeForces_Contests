from math import *

t = int(input())
while t>0:
    n,k = map(int,input().split(" "))
    if(k==1):
        print(n)
    else:
        ct=0;
        while(n>0):
            temp=floor(log(n,k));
            temp2=round(pow(k,temp));
            temp3=floor(n/temp2);
            ct+=floor(temp3);
            n = n- (temp3*temp2);
            
        print(ct)
    t-=1
        
    