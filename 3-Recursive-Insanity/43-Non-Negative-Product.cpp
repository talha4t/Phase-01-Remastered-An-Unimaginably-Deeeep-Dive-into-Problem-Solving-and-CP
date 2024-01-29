#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n; 

    vector<int> v(n);
    for (int &i : v)
        cin >> i;


    int cnt = 0, is_zero = 0;
    for (auto u : v) {
        if (u < 0)
            cnt++;

        if (u == 0)
            is_zero = 1;
    } 

    if (cnt & 1 and is_zero == 0)
        cout << 1;
    else
        cout << 0;

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
    Monday, January 29, 2024 | 08:48:33 (UTC +06:00) Dhaka
*/