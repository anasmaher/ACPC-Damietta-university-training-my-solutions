#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    ll k,n;
    while(t--)
    {
        cin >> n >> k;
        vector<int>v(n);
        loop(i,n) cin >> v[i];

        if(n%2==0)k%=n;else k%=(n+1);

        int i=0,j=n-1;
        while(k--)
        {
            if(i==j||i==j-1)
            {
                swap(v[i],v[j]);i=0;j=n-1;
            }
            else
            {
                swap(v[i],v[j]);
                i++;j--;
            }

        }
        for(auto z:v) cout << z << " ";
        cout << "\n";
    }

}
