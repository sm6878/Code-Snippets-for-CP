//Modular Exponentiation using Repeated Squaring Paradigm

#include <bits/stdc++.h>
using namespace std;

int power(long int x,long int y,long int m)
{
    if(y==0)
    {
        return 1;
    }
    int k=power(x,y/2,m);
    if(y%2==1)
    {
        return ((((1LL*k*k)%m)*x)%m);
    }
    else
        return ((1LL*k*k)%m);
}

//Time Complexity : O(1)
//Space Complexity : O(log(n))
