#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++)
            cin >> a[i][j];
    }

    vector<int> v;
    int ans = INT_MIN;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++)
            v.push_back((a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1]));
    }

    sort(v.begin(), v.end());

    cout << (int)v[v.size() - 1] << '\n';

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
    Friday, July 21, 2023 | 08:38:20 (UTC +06:00) Dhaka
*/