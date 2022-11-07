#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    string s; cin >> s;
    for(int i=0 ; i<s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    string x = "abcdefghijklmnopqrstuvwxyz";

    map<char,int>mp;
    for(int i=0 ; i<26 ; i++)
    {
        int g;cin >> g;
        mp[x[i]] = g;
    }
    for(int i=0 ; i<s.size() ; i++)
    {
        cout << "|" << mp[s[i]];
    }
    cout << "|\n";
}
