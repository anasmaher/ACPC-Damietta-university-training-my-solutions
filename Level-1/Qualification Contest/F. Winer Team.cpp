#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n,x=0,y=0; cin >>n;
    vector<int>v(n);
    for(int i=0 ; i<n;  i++) cin >> v[i];
    for(int i=0 ; i<n/2 ; i++)
    {
        if(v[i]>v[(n/2)+i]) x++;
        else if(v[i]<v[(n/2)+i]) y++;
    }
    if(x>y) cout << "MeMo\n"; else if(x<y) cout << "Nasr\n"; else cout << -1 << "\n";
}
