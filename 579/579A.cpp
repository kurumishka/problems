#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    bitset<64> b (n);
    cout << b.count() << "\n";
    return 0;
}
