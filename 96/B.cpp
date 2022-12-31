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

V(string) res;
V(char) temp;
int n;

ll mstoi(string s) {
    ll res = 0;
    for (char &x : s) {
        res*=10;
        res+= (x-'0');
    }
    return res;
}

bool check() {
    int f = 0,s=0;
    for (int i = 0; i < n; i++) {
        if (temp[i] == '4')
            f++;
        else
            s++;
    }
    return (f==s);
}

void gen(int id = 0) {
    if (id == n) {
        string s = string(all(temp));
        if (check())
            res.pb(s);
        return;
    }
    for (int i = 0; i < 2; i++) {
        temp[id] = (i == 0) ? '4' : '7';
        gen(id+1);
    }
        
}

void solve() {
    string s;
    cin >> s;
    n = s.size();
    if (n%2) n++;
    temp = V(char) (n);
    gen();
    sort(all(res));
    int a = mstoi(s);
    bool ok = false;
    for (int i = 0; i < res.size(); i++) {
        if (mstoi(res[i]) >= a) {
            cout << res[i] << endl;
            ok = true;
            break;
        }
    }
    if (!ok) {
        n+=2;
        temp = V(char) (n);
        res.clear();
        gen();
        sort(all(res));
        for (int i = 0; i < res.size(); i++) {
            if (mstoi(res[i]) >= a) {
                cout << res[i] << endl;
                break;
            }
        }
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
