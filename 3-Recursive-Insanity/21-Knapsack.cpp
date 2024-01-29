#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
int wt[55], val[1005];

int knapsack(int ind, int weight) {

    if (weight == 0)
        return 0;

    if (ind < 0)
        return 0;
    int ans = knapsack(ind - 1, weight);

    if (weight - wt[ind] >= 0) 
        ans = max(ans, knapsack(ind - 1, weight - wt[ind]) + val[ind]);

    return ans;
}
bool solve() {
    
    int n, w; cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    
    cout << knapsack(n - 1, w);

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
    Sunday, January 28, 2024 | 19:36:40 (UTC +06:00) Dhaka
*/