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
    int c1,c2,c3;
    c1=c2=c3=0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        temp%=3;
        if (temp == 0) c3++;
        else if (temp == 2) c2++;
        else if (temp == 1) c1++;
    }
    int a = n/3;
    int ans = 0;
    while (c1 != a || c3 != a || c2 != a) {
        if (c1 < a) {
            if (c3 > a) {
                c1++;
                c3--;
                ans++;
            }
            else if (c2 > a) {
                c1++;
                c2--;
                ans+=2;
            }
        }
        if (c2 < a) {
            if (c1 > a) {
                c1--;
                c2++;
                ans++;
            }
            else if (c3 > a) {
                c3--;
                c2++;
                ans+=2;
            }
        }
        if (c3 < a) {
            if (c2 > a) {
                c2--;
                c3++;
                ans++;
            }
            else if(c1 > a) {
                c1--;
                c3++;
                ans+=2;
            }
        }
    }
    cout << ans << endl;
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
