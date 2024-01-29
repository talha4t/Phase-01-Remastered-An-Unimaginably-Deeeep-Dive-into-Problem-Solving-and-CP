#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int fact(int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++)
        fac *= i;

    return fac;
}
bool solve() {
    
    int n; cin >> n;

    int ans = 0;
    for (int i = 10; i < n; i++) {
        string s = to_string(i);

        ll sum = 0;
        for (int j = 0; j < (int)s.size(); j++)
            sum += fact(s[j] - '0');

        if (sum % i == 0)
            ans += i;
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
    Monday, January 29, 2024 | 07:30:21 (UTC +06:00) Dhaka
*/