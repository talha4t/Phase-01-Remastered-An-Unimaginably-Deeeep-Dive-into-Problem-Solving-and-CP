#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1)
        cout << 1 << '\n';
    if (n == 2)
        cout << 2 << '\n';
    if (n == 3)
        cout << 6 << '\n';
    if (n == 4)
        cout << 4 << '\n';
    if (n > 4)
        cout << 0 << '\n';

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
    Saturday, July 29, 2023 | 16:18:43 (UTC +06:00) Dhaka
*/