#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int x, y, z;
		cin >> x >> y >> z;

		if ( y <= x ) cout << "PIZZA" << "\n";
		else if ( y > x && z <= x ) cout << "BURGER" << "\n";
		else cout << "NOTHING" << "\n";
	}
	
	return 0;
}