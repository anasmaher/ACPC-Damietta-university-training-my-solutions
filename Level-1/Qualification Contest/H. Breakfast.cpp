#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        deque<int>v(n);

        ll noor=0,sec=0;
        for(int i=0 ; i<n ; i++) cin >> v[i];

        int sz=v.size();
        while(sz)
        {
            if(sz==1)
            {
                if(noor<=sec) noor+=v.front();
                else sec+=v.front();
                break;
            }
            if(v.front()>v.back())
            {
                noor+=v.front();
                v.pop_front();
                v.push_back(v.front());
                v.pop_front();
                sz--;
            }
            else
            {
                sec+=v.back();
                v.pop_back();
                v.push_front(v.back());
                v.pop_back();
                sz--;
            }
        }
        if(noor>=sec) cout << "YES\n"; else cout << "NO\n";
    }
}
