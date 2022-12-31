#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n, k;
    cin >> n >> k;
    V<int> res(k);
    for (int i = 0; i < k; ++i)
        res[i] = i+1;
    auto Gen = [&](){
        for (int i = k-1; i >= 0; --i) {
            if (res[i] < n+i-k+1) {
                res[i]++;
                for (int j =i+1; j < k; ++j)
                    res[j] = res[j-1]+1;
                return true;
            }
        }
        return false;
    };
    do {
        for (auto& x : res)
            cout << x << " ";
        cout << endl;
    } while (Gen());
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
