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

		for ( int i = 0; i < n; i++ ) cin >> a[i];

		long long sum = 0;

		bool isPos = true;
		int idx = 0;

		for ( int i = 0; i < n; i++ ) {
			sum += a[i];
			if ( sum >= k ) sum -= k;
			else {
				isPos = false;
				idx = i+1;
				break;
			}
		}

		if ( isPos ) cout << "YES" << "\n";
		else cout << "NO " << idx << "\n";
	}

	return 0;
}