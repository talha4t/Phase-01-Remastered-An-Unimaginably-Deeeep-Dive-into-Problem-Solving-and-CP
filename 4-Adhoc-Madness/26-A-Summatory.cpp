#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e6 + 7, mod =  1e9 + 3;
int pref[N];

int cube(int n) {
    int ans = ((n * 1LL * (n + 1)) / 2) % mod;

    return (ans * 1LL * ans) % mod;
}

bool solve() {
    
    int n; cin >> n;

    cout << pref[n] << '\n';
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < N; i++)
        pref[i] = (pref[i - 1] + cube(i)) % mod;

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
    Tuesday, January 30, 2024 | 16:02:15 (UTC +06:00) Dhaka
*/