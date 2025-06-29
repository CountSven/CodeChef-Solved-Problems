#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b, c;
		cin >> a >> b >> c;

		if ( a >= 51 ) cout << 'A' << "\n";
		else if ( b >= 51 ) cout << 'B' << "\n";
		else if ( c >= 51 ) cout << 'C' << "\n";
		else cout << "NOTA" << "\n";
	}

	return 0;
}