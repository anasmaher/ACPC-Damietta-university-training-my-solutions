#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n; cin >> n;
    int res=0;

    for(int i=6 ; i<=n ; i++)
    {
        int cntr = 0;
        for(int j=2 ; j < i ; j++)
        {
            if(isPrime(j)&&i%j==0) cntr++;
        }
        if(cntr==2) res++;
    }
    cout << res << '\n';
}
