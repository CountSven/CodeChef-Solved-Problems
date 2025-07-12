#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while ( t-- ) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        for ( int i = 0; i < n; i++ ) cin >> v[i];
        
        int cnt = 0;
        
        for ( int i = 1; i < n; i++ ) {
            if ( v[i] < v[i-1] ) {
                swap( v[i], v[i-1] );
                cnt++;
            }
            if ( cnt == 2 ) break;
        }
        
        if ( is_sorted( v.begin(), v.end() ) && cnt <= 1 ) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    
    return 0;
}