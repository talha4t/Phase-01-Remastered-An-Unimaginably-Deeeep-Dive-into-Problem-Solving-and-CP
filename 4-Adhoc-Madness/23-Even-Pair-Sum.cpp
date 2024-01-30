#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    int mn = min(a, b);
    int mx = max(a, b);

    int even_mn = 0, even_mx = 0, odd_mn = 0, odd_mx = 0;
    // min
    if (mn & 1) {
        odd_mn = (mn / 2) + 1;
        even_mn = mn / 2;
    }
    else {
        odd_mn = mn / 2;
        even_mn = mn / 2;
    }

    // min
    if (mx & 1) {
        odd_mx = (mx / 2) + 1;
        even_mx = mx / 2;
    }
    else {
        odd_mx = mx / 2;
        even_mx = mx / 2;
    }
    
    ll ans = (odd_mn * 1LL * odd_mx) + (even_mn * 1LL * even_mx);

    cout << ans << '\n';
    // 3, 5
    // 1, 2, 3, 4
    // 1, 2, 3, 4, 5
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
    Tuesday, January 30, 2024 | 17:47:11 (UTC +06:00) Dhaka
*/