#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v;
    for (int i = 31; i >= 0; i--)
        v.push_back((n >> i) & 1);
    
    int sz = v.size() - 1;
    for (int i = sz; i > 0; i--) {
        swap(v[i], v[i - 1]);
        i--;
    }

    ll ans = 0, ok = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i])
            ok = 1;
        
        if (ok and v[i])
            ans += (1LL << (sz));
        
        sz--;
    }
    
    cout << ans << '\n';

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
    Saturday, July 22, 2023 | 08:57:40 (UTC +06:00) Dhaka
*/