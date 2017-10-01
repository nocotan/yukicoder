//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
    int b1,b2,b3;
    cin >> b1 >> b2 >> b3;
    cout <<((b3-b1)*(b2-b3)+b2*(b1-b2))/(b1-b2)<<endl;
    return 0;
}

