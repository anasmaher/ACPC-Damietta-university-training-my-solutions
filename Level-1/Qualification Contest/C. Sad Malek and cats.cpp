#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;

		int x, y;
		int minx = 0, maxx = 0, miny = 0, maxy = 0;

		while (n--)
		{
			cin >> x >> y;
			minx = min(minx, x); maxx = max(maxx, x);
			miny = min(miny, y); maxy = max(maxy, y);
		}
		cout << 2 * (abs(maxx - minx) + abs(maxy - miny)) << "\n";
	}
}
