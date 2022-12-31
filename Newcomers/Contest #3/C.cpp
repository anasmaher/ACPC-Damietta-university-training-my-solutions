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
        string s; cin >> s; 
        char c; cin >> c;
        bool ch=false;
        
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]==c)
            {
                if((s.size()-i-1)%2==0 && i%2==0)
                {
                    ch=true;
                }
            }
        }
        if(ch) cout << "YES\n"; else cout << "NO\n";
    }
}
