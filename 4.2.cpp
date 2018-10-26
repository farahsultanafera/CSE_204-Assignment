#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll FACTORIAL(ll n)
{
    if (n >= 1)
        return n*FACTORIAL(n-1);
    else
        return 1;
}

int main()
{
    ll n;
    sf(n);
    pf(FACTORIAL(n));
    return 0;
}

