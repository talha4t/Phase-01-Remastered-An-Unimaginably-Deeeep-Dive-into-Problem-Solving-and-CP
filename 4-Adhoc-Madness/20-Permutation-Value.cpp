#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    cout << 1 << ' ' << n << ' ';
    for (int i = 2; i < n; i++)
        cout << i << ' ';

    cout << '\n';
        
    return true;
}

int32_t main() {
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
    Tuesday, January 30, 2024 | 22:36:14 (UTC +06:00) Dhaka
*/