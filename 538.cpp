//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    double a, b, c;
    cin >> a >> b >> c;
    double r = (b - c) / (a - b);
    double d = b - r*a;
    int ans = r*c+d;
    cout << ans << endl;
    return 0;
}

