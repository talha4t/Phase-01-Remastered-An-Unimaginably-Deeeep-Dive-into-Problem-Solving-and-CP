#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int even = n / 2, odd = n / 2;
    if (n & 1)
        odd++;


    ll ans = odd * 1LL * even * 2;

    cout << ans << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Tuesday, January 30, 2024 | 18:21:44 (UTC +06:00) Dhaka
*/