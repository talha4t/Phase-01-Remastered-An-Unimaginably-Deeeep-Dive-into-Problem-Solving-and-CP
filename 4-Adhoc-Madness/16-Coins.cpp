#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, s;
    cin >> n >> s;

    int ans = 0;
    if (n < s) {
        if (s % n == 0)
            ans = s / n;
        else
            ans = s / n + 1;
    }
    else
        ans = s;

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
    Wednesday, January 31, 2024 | 09:42:33 (UTC +06:00) Dhaka
*/