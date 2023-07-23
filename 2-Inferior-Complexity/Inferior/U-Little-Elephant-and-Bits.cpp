#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s; 

    string ss; ss.clear();

    int indx = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            indx = i;
            break;
        }
        ss.push_back(s[i]);
    }
    
    if (indx == -1) {
        for (int i = 0; i < s.size() - 1; i++)
            cout << ss[i];
    }
    else {
        for (int i = indx + 1; i < s.size(); i++)
            ss.push_back(s[i]);

        cout << ss << '\n';
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
    Sunday, July 23, 2023 | 11:42:18 (UTC +06:00) Dhaka
*/

