#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll k,p,n; cin >> k >> p >> n;
        if(k<p)
        {
            cout << 0 << '\n'; continue;
        }
        cout << (k-p)*n << '\n';
    }
}
