#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,t; cin >> n >> t;
    int k,c;
    while(t--)
    {
        cin >> k >> c;
        if(k<=n && c<=n) cout << "Roger that, Danger close!\n";
        else cout << "Negative Sir\n";
    }
}
