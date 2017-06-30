//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int n;
    cin >> n;
    set<string> st;
    for(int i=1; i*i<=n; ++i) {
        if(n%i!=0) continue;
        int a = i;
        int b = n/i;
        st.insert(to_string(a)+to_string(b));
        st.insert(to_string(b)+to_string(a));
    }
    cout << st.size() << endl;
    return 0;
}

