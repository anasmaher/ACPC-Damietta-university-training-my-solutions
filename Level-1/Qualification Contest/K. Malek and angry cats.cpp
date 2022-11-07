#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll x,y,z; cin >> x >> y >> z;
    cout << lcm(x,lcm(y,z)) << '\n';
}
