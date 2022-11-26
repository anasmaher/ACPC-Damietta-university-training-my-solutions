#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll x; cin >> x;
        cout << fixed << setprecision(0) << powl(2,x)-1 << '\n';
    }
}

// fixed cuz in big numbers the result is in scientific notation, for example 10,000,000 is 1e7 and it will get wrong answer
