//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    string s;
    cin >> s;
    if(s[s.size()-1]=='i'&&s[s.size()-2]=='a') {
        s[s.size()-1]='I';
        s[s.size()-2]='A';
    } else s += "-AI";
    cout << s << endl;
    return 0;
}

