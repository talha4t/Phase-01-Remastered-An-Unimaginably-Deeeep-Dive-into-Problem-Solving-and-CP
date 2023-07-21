#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    stack<int> v;
    for (int i = 31; i >= 0; i--)
        v.push((n >> i) & 1);

    ll ans = 0, ok = 0;
    while(!v.empty()) {
        if (v.top())
            ok = 1;
        
        if (ok and v.top() == 1)
            ans += (1LL << (v.size() - 1));
        v.pop();
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
    Friday, July 21, 2023 | 10:02:54 (UTC +06:00) Dhaka
*/