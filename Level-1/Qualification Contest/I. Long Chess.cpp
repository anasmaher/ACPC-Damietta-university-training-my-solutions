#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    map<char,int>mp;
    mp['Q']=9; mp['R']=5; mp['B']=3; mp['N']=3; mp['P']=1;

    ll m,q; cin >> m >> q;

    vector<ll>v(m);
    char c;
    for(int i=0 ; i<m ; i++)
    {
        cin >> c;
        v[i]=mp[c];
    }
    for(int i=1 ; i<m ; i++) v[i]+=v[i-1];
	
	int x;
    while(q--)
    {
        cin >> x;
        cout << v[x-1] << '\n';
    }
}
