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

		int mnEl = INT_MAX, mxEl = 0, mnIdx = 0, mxIdx = 0;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			if ( a[i] < mnEl ) {
				mnEl = a[i];
				mnIdx = i+1;
			}
			if ( a[i] >= mxEl ) {
				mxEl = a[i];
				mxIdx = i+1;
			}
		}

		int toFsSwap = mnIdx - 1; 
		int toLsSwap = n - mxIdx;
		int totSwap = toFsSwap + toLsSwap;

		if ( mnIdx > mxIdx ) cout << totSwap - 1 << "\n";
		else cout << totSwap << "\n";
	}

	return 0;
}