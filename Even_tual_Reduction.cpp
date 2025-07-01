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

		map<char, int> mp;

		for ( int i = 0; i < n; i++ ) mp[s[i]]++;

		bool isEvtual = true;

		for ( auto u : mp ) {
			if ( u.second % 2 ) {
				isEvtual = false;
				break;
			}
		}

		if ( isEvtual ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}