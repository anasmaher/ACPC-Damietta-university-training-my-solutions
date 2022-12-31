#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int n=s.size();

        if(n%2!=0)
        {
            cout << "NO\n"; continue;
        }

        string ans="YES";
        for(int i=0 ; i<n/2 ; i++) // 1 2 3 4
        {
            if(s[i]!=s[(n/2)+i])
            {
                ans="NO"; break;
            }
        }
        cout << ans << '\n';
    }
}
