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
		string s, r;
		cin >> n >> s >> r;

		int sZ = 0, sO = 0, rZ = 0, rO = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '0' ) sZ++;
			else sO++;
		}

		for ( int i = 0; i < n; i++ ) {
			if ( r[i] == '0' ) rZ++;
			else rO++;
		}

		// cout << sZ << " " << sO << " " << rZ << " " << rO << "\n";
		if ( sZ == rZ && sO == rO ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}