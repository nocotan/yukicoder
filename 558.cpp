#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    string s;
    cin >> s;
    if(s.size()<3) {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<=s.size()-3; ++i) {
        if(s.substr(i, 3)=="575") {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

