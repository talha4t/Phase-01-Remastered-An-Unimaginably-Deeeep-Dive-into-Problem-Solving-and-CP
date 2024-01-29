#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e7 + 5;
int a[N];

bool solve() {
    
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i)
            a[j]++;
    }

    int n; cin >> n;

    ll ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i * 1LL * a[i];

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
    Monday, January 29, 2024 | 22:14:45 (UTC +06:00) Dhaka
*/