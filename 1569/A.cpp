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
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define US(T) unordered_set<T>

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int bal = 0, l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        bal = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == 'a') bal++;
            else bal--;
            if (bal == 0) {
                r = j+1;
                l = i+1;
                goto ans;
            }
        }
    }
    ans:
    cout << l << " " << r << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    times
    {
    solve();
    }
    return 0;
}
