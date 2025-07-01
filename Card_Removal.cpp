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

		map<int, int> mp;

		for ( int i = 0; i < n; i++ ) {
			cin >> a[i];
			mp[a[i]]++;
		}

		int mxNum = 0, mxCnt = 1;

		for ( auto u : mp ) {
			if ( u.second >= mxCnt ) {
				mxNum = u.first;
				mxCnt = max( mxCnt, u.second );
			}
		}

		int remCnt = 0;

		for ( auto u : a ) {
			if ( u != mxNum ) remCnt++;
		}

		cout << remCnt << "\n";
	}

	return 0;
}