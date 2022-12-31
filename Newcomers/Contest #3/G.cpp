

// for python guys, using "count" function on the list would be O(n), on high values of n you will get TLE
// use set if you know about it
// use map / freq array / dict if you know about it

#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define NO cout << "NO\n"
#define YES cout << "YES\n"
#define T int t; cin >> t; while(t--)
#define OO 0x3f3f3f3f
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    T // test cases
    {
      int n, minn=INT_MAX, maxx=-1, minID, maxID, minCntr=0, maxCntr=0; cin >> n;
      vector<int>v(n);
      for(int i=0 ; i<n ; i++) 
      {
          cin >> v[i];
          if(v[i]>=maxx)
          {
              maxx = v[i];
              maxID = i+1;
          }
          if(v[i]<=minn)
          {
              minn = v[i];
              minID = i+1;
          }
      }
      for(int i=0 ; i<n ; i++)
      {
          if(v[i]==minn) minCntr++;
          else if(v[i]==maxx) maxCntr++;
          if(minCntr>1)
          {
              cout << maxID << '\n'; break;
          }
          if(maxCntr>1)
          {
              cout << minID << '\n'; break;
          }
      }
    }
}

//=================================================================

