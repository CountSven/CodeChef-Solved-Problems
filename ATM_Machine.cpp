#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] <= k ) {
				cout << 1;
				k -= a[i];
			}
			else cout << 0;
		}

		cout << "\n";
	}

	return 0;
}