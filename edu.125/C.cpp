#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)

inline bool check(int l, int r, string& s){
    while (r > l) {
        if (s[l] != s[r]) return false;
        ++l;
        --r;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ptr = 0, ans = 0;
    while (ptr < n-1) {
        if (s[ptr] == ')' && s[ptr+1] != ')') {
            int l = ptr+1;
            while (l < n) {
                if (check(ptr, l, s)) break;
                ++l;
            }
            if (l==n) break;
            else {
                ptr = l+1;
                ++ans;
                continue;
            }
        }
        if ((s[ptr] == '(') || (s[ptr] == ')' && s[ptr+1] == ')')) {
            ++ans;
            ptr += 2;
            continue;
        }
    }
    cout << ans << " " << n-ptr << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
