#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    
    ll mx_sum = -1e18, mx_sum_so_far = -1e18;
    for (int i = 0; i < n; i++) {
        mx_sum_so_far = max((ll)v[i], v[i] + mx_sum_so_far);

        mx_sum = max(mx_sum, mx_sum_so_far);
    }

    cout << mx_sum << '\n';
    
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
    Monday, January 08, 2024 | 23:04:08 (UTC +06:00) Dhaka
*/