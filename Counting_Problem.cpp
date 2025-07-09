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
		int a[n];

		long long oddTot = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] % 2 ) oddTot++;
		}

		if ( oddTot % 2 || oddTot == 0 ) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}

	return 0;
}