#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int n, a;
		cin >> n >> a;

		int tot = n - a;

		if ( tot > a ) cout << a << "\n";
		else cout << tot << "\n";
	}
	
	return 0;
}