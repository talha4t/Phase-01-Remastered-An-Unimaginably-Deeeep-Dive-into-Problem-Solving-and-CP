#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int cnt_divisor(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (x / i != i)
                cnt++;
        }
    }

    return cnt;
}

bool solve() {
    
    int n; cin >> n;

    while(n--) {
        int x; cin >> x;

        cout << cnt_divisor(x) << '\n';
    }

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
    Monday, January 29, 2024 | 11:34:58 (UTC +06:00) Dhaka
*/