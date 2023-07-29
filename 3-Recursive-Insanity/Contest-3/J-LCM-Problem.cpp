#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll l, r; cin >> l >> r;

    if (l * 2 > r)
        cout << "-1 -1" << '\n';
    else
        cout << l << ' ' << l * 2 << '\n';

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
    Saturday, July 29, 2023 | 10:56:01 (UTC +06:00) Dhaka
*/