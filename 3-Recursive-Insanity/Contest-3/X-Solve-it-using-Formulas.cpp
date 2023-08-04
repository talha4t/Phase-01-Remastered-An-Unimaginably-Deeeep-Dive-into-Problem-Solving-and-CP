#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    ll sum1 = ((n * (n + 1) / 2) * (n * (n + 1) / 2));
    ll sum2 = (n * (n + 1) * ((2 * n) + 1)) / 6;

    cout << abs(sum1 - sum2) << '\n';

    return true;
}

int main() {
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
    Friday, August 04, 2023 | 19:01:40 (UTC +06:00) Dhaka
*/