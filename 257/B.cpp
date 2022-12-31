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

pair<string,string> gen(int n, int m) {
    string ans = string(n+m, ' ');
    string ans2 = string(n+m, ' ');
    int n1=n,m1=m,n2=n,m2=m;
    ans[0] = 'R';
    n1--;
    ans2[0] = 'B';
    m2--;
    int res = n+m;
    for (int i = 1; i < res; i++) {
        if (i%2) {
            if (ans[i-1] == 'B' && n1 > 0) {
                ans[i]='R';
                n1--;
            }
            else if (ans[i-1] == 'R' && m1 > 0) {
                ans[i]='B';
                m1--;
            }
            else {
                ans[i] = (n1 > 0) ? 'R' : 'B';
                if (n1 > 0) n1--;
                else m1--;
            }
            if (ans2[i-1] == 'B' && n2 > 0) {
                ans2[i]='R';
                n2--;
            }
            else if (ans2[i-1] == 'R' && m2 > 0) {
                ans2[i]='B';
                m2--;
            }
            else {
                ans2[i] = (n2 > 0) ? 'R' : 'B';
                if (n2 > 0) n2--;
                else m2--;
            }

        }
        else {
            if (ans[i-1] == 'B' && m1 > 0) {
                ans[i]= 'B';
                m1--;
            }
            else if (ans[i-1] == 'R' && n1 > 0) {
                ans[i]= 'R';
                n1--;
            }
            else {
                ans[i] = (n1 > 0) ? 'R' : 'B';
                if (n1 > 0) n1--;
                else m1--;
            }
            if (ans2[i-1] == 'B' && m2 > 0) {
                ans2[i] = 'B';
                m2--;
            }
            else if (ans2[i-1] == 'R' && n2 > 0) {
                ans2[i]= 'R';
                n2--;
            }
            else {
                ans2[i] = (n2 > 0) ? 'R' : 'B';
                if (n2 > 0) n2--;
                else m2--;
            }

        }
    }
    return {ans, ans2};
}

void solve() {
    int n, m;
    cin >> n >> m;
    string v1, v2;
    int s1 =0, s2=0;
    pair<string, string> res = gen(n,m);
    v1 = res.F;
    v2 = res.S;
    int f1=0, f2=0;
    for (int i = 1; i < n+m; i++) {
        if (v1[i] == v1[i-1]) f1++;
        else f2++;
        if (v2[i] == v2[i-1]) s1++;
        else s2++;
    }
    int r1,r2;
    if (s2+s1 == f1+f2) {
        if (f1 > s1) {
            cout << f1 << " " << f2 << endl;
        }
        else {
            cout << s1 << " " << s2 << endl;
        }
    }
    else {
        if (f1+f2 > s1+s2) {
            cout << f1 << " " << f2 << endl;
        }
        else
            cout << s1 << " " << s2 << endl;
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
