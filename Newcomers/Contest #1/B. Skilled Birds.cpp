#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    int x[n],c[n];
    for(int i=0 ; i<n ; i++) cin >> x[i]; sort(x,x+n);
    for(int i=0 ; i<n ; i++) cin >> c[i]; sort(c,c+n);

    for(int i=0 ; i<n ; i++)
    {
        if(c[i]<x[i])
        {
            cout << "NO\n"; return 0;
        }
    }
    cout << "YES\n";
}
