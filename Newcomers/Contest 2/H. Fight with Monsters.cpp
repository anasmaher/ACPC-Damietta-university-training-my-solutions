#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr,arr+n);

    int res=0;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]!=arr[i-1])res++;
    }
    cout << ++res << '\n'; // why ++res ? cuz last number won't be counted, trace it and see.
}

// another solution
/*
    int n; cin >> n;
    set<int>st;
    int val;
    while(n--)
    {
        cin >> val;
        st.insert(val);
    }
    cout << st.size() << '\n';
\*
