#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,a,b,c; cin >> x >> a >> b >> c;
        int res = a +(2*b)+(5*c);
        if(res>=100) res = res*0.9;
        if(res<=x) cout << "YES\n";
        else cout << "NO\n";
    }
}
