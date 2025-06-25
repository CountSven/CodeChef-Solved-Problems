#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int a[n*2];

		map<int, int> mp;

		for ( int i = 0; i < n*2; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}

		bool isPos = true;

		for ( auto u : mp ) {
			if ( u.second > 2 ) {
				isPos = false;
				break;
			}
		}
		
		// for ( auto u : a ) cout << u << " ";
		// cout << "\n";

		if( isPos ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}