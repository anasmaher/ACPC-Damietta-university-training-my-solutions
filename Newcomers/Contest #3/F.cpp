#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x,n,res=100,h=res; cin >> n;
    
    while(n--)
    {
        cin >> x;
        h += x;
        res=max(res, h);
    }
    cout << res << '\n';
}
