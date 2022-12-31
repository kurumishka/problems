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
    int n, k;
    cin >> n >> k;
    V(int) a (n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));
    for (int i = 0; i < n; i++) {
        if (k && a[i] < 0) { 
            a[i] = a[i]*(-1);
            k--;
        }
        else if (k == 0)
            break;
    }
    sort(all(a));
    if (k > 0 && k%2)
        a[0] = a[0]*(-1);
    
    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
