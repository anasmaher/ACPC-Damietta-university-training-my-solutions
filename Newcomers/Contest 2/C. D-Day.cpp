#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x,n; cin >> n;
    ll e=0,o=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> x; x%2 ? o++ : e++;
    }
    if(o>e) cout << o*2 << "\n";
    else if(o<e) cout << (e*2)-1 << '\n';
    else cout << n << '\n';
}
