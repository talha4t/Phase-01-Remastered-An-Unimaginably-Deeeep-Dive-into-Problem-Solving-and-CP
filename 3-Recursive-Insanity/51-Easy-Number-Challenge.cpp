#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e6 + 7;
const int mod = 1073741824;
int d[N];

bool solve() {
    
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i)
            d[j]++;
    }

    int a, b, c; 
    cin >> a >> b >> c;

    int ans = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                int prod = i * j * k;
                ans = (ans + d[prod]) % mod;
            }
        }
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
    Monday, January 29, 2024 | 23:37:44 (UTC +06:00) Dhaka
*/