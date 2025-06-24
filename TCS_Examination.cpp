#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int d1, d2, d3;
		cin >> d1 >> d2 >> d3;
		int s1, s2, s3;
		cin >> s1 >> s2 >> s3;

		int sumOfD = d1 + d2 + d3;
		int sumOfS = s1 + s2 + s3;

		if ( sumOfD > sumOfS ) cout << "DRAGON" << "\n";
		else if ( sumOfD < sumOfS ) cout << "SLOTH" << "\n";
		else {
			if ( d1 > s1 ) cout << "DRAGON" << "\n";
			else if ( d1 < s1 ) cout << "SLOTH" << "\n";
			else {
				if ( d2 > s2 ) cout << "DRAGON" << "\n";
				else if ( d2 < s2 ) cout << "SLOTH" << "\n";
				else {
					if ( d3 > s3 ) cout << "DRAGON" << "\n";
					else if ( d3 < s3 ) cout << "SLOTH" << "\n";
					else cout << "TIE" << "\n";
				}
			}
		}
	}

	return 0;
}