#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string s; cin >> s;

        int ct = 0, z = 0;
        for (int i = 1; i <= s.size() - 1; i++) {
            if (s[i] == '0')
                ct++;

            if (s[i] != '0')
                z++;
        }

        if (ct == s.size() - 1) {
            cout << 1 << ed;
            cout << s << ed;
        }


        else { 
            cout << z  + 1 << ed;
            for (int i = 0; i <= s.size() - 1; i++) {
                if (s[i] != '0') {
                    cout << s[i];
                    for (int j = i + 1; j <= s.size() - 1; j++) {
                        cout << 0;
                    }
                    cout << ' ';
                }
            }
            cout << ed;
        }

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)

