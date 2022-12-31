#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    string s1="";
    cin.ignore();
    string x;
    while(n--)
    {
        getline(cin,x);
        for(int i=0 ; i<x.size(); i++)
        {
            if(x[i]!=' ') s1+=x[i];
        }
    }

    string s2="";
    int m; cin >> m;
    cin.ignore();
    while(m--)
    {
        getline(cin,x);
        for(int i=0 ; i<x.size(); i++)
        {
            if(x[i]!=' ') s2+=x[i];
        }
    }
    if(s1==s2) cout << "YES\n";
    else cout << "NO\n";
}
