#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ) {
		string s1, s2;
		cin >> s1 >> s2;

		int mnCnt = 0, mxCnt = 0;

		for ( int i = 0; i < s1.size(); i++ ) {
			if ( s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i] ) mnCnt++;
		}

		for ( int i = 0; i < s1.size(); i++ ) {
			if ( s1[i] != s2[i] || ( s1[i] == '?' && s2[i] == '?' ) ) mxCnt++;
		}

		cout << mnCnt << " " << mxCnt << "\n";
	}

	return 0;
}