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
		string s;
		cin >> s;

		for ( int i = 0; i < n; i += 2 ) {
		    if ( i+1 < n ) swap( s[i],s[i+1] );
		}

		map<char, char> mp;

		for ( char c = 'a', i = 'z'; c <= 'z'; c++, i-- ) mp[c] = i;

		// for ( auto u : mp ) cout << u.first << " " << u.second << "\n";

		for ( int i = 0; i < n; i++ ) s[i] = mp[s[i]];

		cout << s << "\n";
	}

	return 0;
}