#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

#define NO\
    do {\
        cout << "NO" << endl;\
        return;\
    } while(0)

int n, last = 3;
set<pair<int,int>> t;
set<pair<int,int>> rest;
V(int) nodes;

int gen(int node, int h) {
    if (h == 0)
        return 0;
    if (n < 2)
        return -1;
    t.insert({node, nodes.back()});
    int _t = nodes.back();
    nodes.pop_back();
    t.insert({node, nodes.back()});
    if (h-1 > 0) rest.insert({h-1, nodes.back()});
    nodes.pop_back();
    n-=2;
    return gen(_t, h-1);
}

void solve() {
    int h1, h2, h3;
    cin >> n >> h1 >> h2 >> h3;
    nodes = V(int) (n-3);
    for (int i = 0; i < n-3; i++)
        nodes[i] = n-i;
    if (h1 != max(h2,h3)+1 || h2 < h3 || n%2 == 0) {
        cout << "NO" << endl;
        return;
    }
    n-=3;
    t.insert({1,2});
    t.insert({1,3});
    if (n > 0) {
        int a = gen(2, h2);
        if (a == -1)
            NO;
        int b = gen(3, h3);
        if (b == -1)
            NO;
        while (n > 0 && rest.size() != 0) {
            auto old = rest;
            for (auto &x : old) {
                gen(x.second, x.first);
                rest.erase(x);
            }
        }
    }
    if (n != 0) NO;
    cout << "YES" << endl;
    for (auto &x : t) cout << x.first << " " << x.second << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
