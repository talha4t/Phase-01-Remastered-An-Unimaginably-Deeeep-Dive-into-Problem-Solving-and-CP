#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    if (b % a == 0)
        cout << a << ' ' << b << '\n';
    else
        cout << -1 << '\n';
    
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
    Friday, July 28, 2023 | 14:21:21 (UTC +06:00) Dhaka
*/