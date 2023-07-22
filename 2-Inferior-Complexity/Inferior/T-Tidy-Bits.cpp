#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ones = __builtin_popcount(n);
    
    for (int i = 0; i <= 1000000; i++) {
        if (ones == __builtin_popcount(i)) {
            cout << i << '\n';
            return true;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, July 22, 2023 | 08:50:45 (UTC +06:00) Dhaka
*/