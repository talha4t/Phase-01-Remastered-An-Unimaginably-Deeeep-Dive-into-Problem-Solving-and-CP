#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        sum += x;
    }

    cout << fixed << setprecision(12) << sum / n << '\n';

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
    Tuesday, January 30, 2024 | 16:13:18 (UTC +06:00) Dhaka
*/