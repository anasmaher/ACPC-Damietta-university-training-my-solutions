#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n,res=0,maxx=0; cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        if(arr[i]>maxx) maxx=arr[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>res && arr[i]<maxx) res=arr[i];
    }
    cout << res << '\n';
}
