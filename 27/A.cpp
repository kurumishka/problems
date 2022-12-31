#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second
#define T_MAX(a,b,c) max(max(a,b),c)
#define SUPER_DUPER_FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REV [](const int &a, const int &b){return a > b;}
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    int n;
    cin >> n;
    vector<int> need (n);
    vector<int> have (n);
    for (int i = 0; i < n; i++) {
        cin >> have[i];
        need[i] = i+1;
    }
    bool ok = false;
    sort(all(have));
    for(int i = 0; i < n; i++) {
        if (need[i] != have[i]) {
            cout << need[i] << endl;
            ok = true;
            break;
        }
    }
    if (!ok) {
        cout << have[have.size()-1]+1 << endl;
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
