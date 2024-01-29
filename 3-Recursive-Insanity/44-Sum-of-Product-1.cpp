#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    ll cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        
        if (x == 1)
            cnt++;

        if (x == 0 or n == i) {
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }

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
    Monday, January 29, 2024 | 11:26:34 (UTC +06:00) Dhaka
*/