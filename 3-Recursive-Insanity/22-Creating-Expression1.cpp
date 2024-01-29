#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e5 + 7;
int ok = 0, x, n;
int v[N];

void expression(int i, int sum) {

    if (i > n) {
        if (sum == x)
            ok = 1;
        return;
    }
    expression(i + 1, sum + v[i]);

    expression(i + 1, sum - v[i]);
}
bool solve() {
    
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v[i] = x;
    }

    ok = 0;

    expression(1, v[0]);

    if (ok)
        cout << "YES";
    else
        cout << "NO";

    cout << '\n';
    
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
    Sunday, January 28, 2024 | 20:19:41 (UTC +06:00) Dhaka
*/