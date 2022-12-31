#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS (1e9+7)

// --------- vector operators ----------------
template<class T>
inline ostream& operator<<(ostream& os, V<T>& vec) {
    for(auto& x : vec) os << x << " ";
    return os; }

template<class T>
inline istream& operator>>(istream& is, V<T>& vec) {
    for(auto &x : vec) is >> x;
    return is; }
// ------------------------------------------

map<char, int> ci;
map<int, char> ic;
void gen() {
    string s ="0123456789ABCDE";
    for(int i = 0; i <= 14; ++i) {
        ci[s[i]] = i;
        ic[i] = s[i];
    }
}

void solve() {
    string a,b,ans;
    cin >> a >> b;
    char rest = '0';
    int ac = 0, bc = 0;
    for (int i = a.size()-1; i >= 0; --i) {
        if (a[i] == '.') break;
        ac++;
    }
    for(int i = b.size()-1; i>=0;--i) {
        if (b[i] == '.') break;
        bc++;
    }
    int d = abs(ac-bc);
    if (ac > bc)
        while(d--)
            b.pb('0');
    else if (bc > ac)
        while(d--)
            a.pb('0');

    d = abs((int)a.size()- (int)b.size());
    if (a.size() > b.size()) {
        reverse(all(b));
        while(d--)
            b.pb('0');
        reverse(all(b));
    } else if (a.size() < b.size()) {
        reverse(all(a));
        while(d--)
            a.pb('0');
        reverse(all(a));
    }
    for(int i = a.size()-1; i >= 0 ; --i) {
        if (a[i] == '.') {
            ans.pb('.');
            continue;
        }
        int a_i = ci[a[i]], b_i = ci[b[i]], rest_i = ci[rest];
        int result = a_i+b_i+rest_i;
        if (result >= 15) {
            rest = ic[result/15];
            result%=15;
        }
        else
            rest = '0';
        ans.pb(ic[result]);
    }
    if (rest != '0')
        ans.pb(rest);
    reverse(all(ans));
    string nans;
    int fst = 0;
    for(int i = ans.size()-1; i >=0;--i) {
        if (ans[i] == '.') { fst=i-1; break;}
        if (ans[i] != '0') {fst = i; break;}
    }
    if (fst != 0) {
        for(int i = 0; i <=fst; ++i)
            nans.pb(ans[i]);
        cout << nans << endl;
    } else {cout << ans << endl;}
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    gen();

    solve();
    return 0;
}
