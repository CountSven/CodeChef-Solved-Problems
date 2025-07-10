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

		bool isY = false, isI = false;

		for ( int i = 0; i < n; i++ ) {
			if ( s[i] == 'Y' ) isY = true;
			else if ( s[i] == 'I' ) isI = true;
		}

		if ( isY ) cout << "NOT INDIAN" << "\n";
		else if ( isI ) cout << "INDIAN" << "\n";
		else cout << "NOT SURE" << "\n";
	}

	return 0;
}