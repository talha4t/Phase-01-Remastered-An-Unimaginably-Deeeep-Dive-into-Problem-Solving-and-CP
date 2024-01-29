#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 105;
char s[N][N];
int n, m;

bool is_inside(int i, int j) {
    if (i >= 0 and i < n and j >= 0 and j < m)
        return true;
    
    return false;
}

bool is_valid(int i, int j) {
    if (!is_inside(i, j))
        return true;

    if (s[i][j] == 'x')
        return true;
    
    return false;
}

bool solve() {
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> s[i][j];
    }

    int x, y; cin >> x >> y;
    x--, y--;

    if (is_valid(x - 1, y) and is_valid(x, y - 1) and is_valid(x + 1, y)
        and is_valid(x, y + 1) and is_valid(x - 1, y - 1) and is_valid(x + 1, y + 1)
        and is_valid(x + 1, y - 1) and is_valid(x - 1, y + 1)) {
            cout << "yes";
        }
    else
        cout << "no";

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
    Tuesday, January 09, 2024 | 07:55:18 (UTC +06:00) Dhaka
*/