#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    ll ans = 0;
    map<int, int> mp;
    for (int j = 0; j < n; j++) {
        ans += j - mp[v[j]];
        mp[v[j]]++;
    }

    cout << ans << '\n';

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
    Friday, February 02, 2024 | 10:28:04 (UTC +06:00) Dhaka
*/