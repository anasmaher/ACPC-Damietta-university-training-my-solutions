#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    vector<int>v(4); for(int i=0 ; i<4 ; i++) cin >> v[i]; // You can use array instead of a vector, same idea
    sort(v.begin(), v.end());
    
    int res=0;
    for(int i=1 ; i<4 ; i++)
    {
        if(v[i]==v[i-1]) res++;
    }
    cout << res << '\n';
}

// use a set if you know about it, solution:
// 4-setSize
