#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    double ans = 0;
    for (int i = 1; i <= n; i++)
        ans += 1.00 * 1 / i;

    cout << fixed << setprecision(4) << ans << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, January 29, 2024 | 11:30:35 (UTC +06:00) Dhaka
*/