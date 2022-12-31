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
    string s;
    cin >> s;
    map<char, int> al;
    for (int i = 0; i < 26; i++) {
        char res = 'a'+i;
        res = toupper(res);
        al[res] = i;
    }
    
    for (int i = 2; i < s.size(); i++) {
        int code = al[s[i-1]]+al[s[i-2]];
        if (code >= 26) code -= 26;
        if (al[s[i]] != code) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
