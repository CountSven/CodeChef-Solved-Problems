#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		int a, b;
		cin >> a >> b;

		int sumL = 0, sumB = 0, initL = 1, initB = 2;

		bool isLim = true, isBob = true;

		while ( sumL <= a && sumB <= b ) {
			sumL += initL;
			initL += 2;
			if ( sumL > a ) {
				isLim = false;
				break;
			}
			sumB += initB;
			initB += 2;
			if ( sumB > b ) {
				isBob = false;
				break;
			}
		}

		if ( isLim ) cout << "Limak" << "\n";
		else if ( isBob ) cout << "Bob" << "\n";
	}

	return 0;
}