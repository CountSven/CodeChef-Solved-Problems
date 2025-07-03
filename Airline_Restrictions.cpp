#include<bits/stdc++.h>
using namespace std;

bool isV( char c )
{
	return( c == 'a' || c == 'e' );
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;

		if ( ( a + b <= d && c <= e ) || ( b + c <= d && a <= e ) || ( c + a <= d && b <= e ) ) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	
	return 0;
}