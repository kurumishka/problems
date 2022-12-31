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
    ll n;
    cin >> n;
    ll pred = 0, cur;
    for (int i = 1; i <= 40000; i++) {
        cur = i*i;
        if (n <= cur && n >= pred) {
            break;
        }
        pred = cur;
    }
    int i = 1, k = sqrt(pred)+1;
    int b = sqrt(cur)-1;
    ll res = pred+1;
    while (b && res != n) {
        res++;
        i++;
        b--;
    }
    while (k && res != n) {
        res++;
        k--;
    }
    cout << i << " " << k << endl; 
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
