#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll FIBO(ll n)
{
    if (n== 0)
    {
        return 0;
    }
    else if (n== 1)
    {
        return 1;
    }
    else
    {
        return(FIBO(n-1) + FIBO(n-2));
    }
}
///0,1,2,3,5,8,13.....

int main()
{
    ll n;
    sf(n);
    if (n< 0)
    {
        return 0;   ///negative not possible
    }
    else
    {
        pf(FIBO(n));
    }

    return 0;
}


