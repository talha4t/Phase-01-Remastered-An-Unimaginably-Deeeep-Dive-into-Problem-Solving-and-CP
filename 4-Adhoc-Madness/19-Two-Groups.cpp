#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a, b;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        if (x > 0)
            a.push_back(x);
        else
            b.push_back(x);
    }

    ll sum1 = 0;
    sum1 = accumulate(a.begin(), a.end(), sum1);
    ll sum2 = 0;
    sum2 = accumulate(b.begin(), b.end(), sum2);

    ll ans = abs(sum2 + sum1);

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
    Wednesday, January 31, 2024 | 07:58:14 (UTC +06:00) Dhaka
*/