#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, res=0; cin >> n;
    int v[n]; for(int i=0; i<n; i++) cin >> v[i];
    for(int i=1 ; i<n ; i++)
    {
        if(v[i]>v[i-1]) res++;
        else break;
    }
    cout << ++res << '\n';
}
