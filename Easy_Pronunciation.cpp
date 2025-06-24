#include<bits/stdc++.h>
using namespace std;

bool isVowel( char c )
{
	return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
}

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

		bool isEasy = true;

		for ( int i = 0; i < n; i++ ) {
			if ( i+3 < n ) {
				if ( !isVowel( s[i] ) && !isVowel( s[i+1] ) && !isVowel( s[i+2] ) && !isVowel( s[i+3] ) ) {
					isEasy = false;
					break;
				}
			}
		}

		if ( isEasy ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}