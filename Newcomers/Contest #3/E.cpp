#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n,m; cin >> n>> m;
        vector<int>v(n); for(int i=0 ; i<n ; i++) cin >> v[i]; // you can use array instead of a vector, same idea
        sort(v.begin(),v.end());
        cout << v[n-1]-v[0] << '\n';
    }
}
