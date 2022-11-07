#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k,x=0; cin >> n >> k;
        int arr[3];
        int res[n+n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[0] >> arr[1] >> arr[2];
            sort(arr,arr+3);
            res[x] = arr[0]; res[x+1]=arr[1];
            x+=2;
        }
        sort(res,res+n+n);
        int ans=0;
        for(int i=0 ; i<k ; i++) ans+=res[i];
        cout << ans << '\n';
    }
}
