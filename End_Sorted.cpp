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
		vector<int> v(n);

		for ( int i = 0; i < n; i++ ) cin >> v[i];

		int fnd1 = find(v.begin(), v.end(), 1) - v.begin();
		int fndN = find(v.begin(), v.end(), n) - v.begin();
		cout << n - 1 - fndN + fnd1 - ( fnd1 > fndN ) << "\n";
	}

	return 0;
}