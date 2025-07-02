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

		int zr = 0, one = 0;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) one++;
			else zr++;
		}

		int cnt = 0;

		if ( one > zr ) {
			for ( int i = 0; i < n; i++ ) {
				if ( s[i] == '1' ) s[i] = '0';
				else s[i] = '1';
			}
			cnt++;
		}

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == '1' ) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}