#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

bool check(string &s) {
    int d = 0, m = 0;
    for (int i = 0; i < 6; i+=2)
    if ((s[i] == '=' && s[i+1] == '>') || (s[i] == '>' && s[i+1] == '='))
        d++;
    else if ((s[i] == '=' && s[i+1] == '=') || (s[i] == '>' && s[i] == '<') || (s[i] == '<' && s[i] == '>')) {
        d++;
        m++;
    }
    else m++;
    return d > m;
}

void solve() {
    V(int) x (6);
    for (auto &y : x)
        cin >> y;
    int c;
    cin >> c;
    V(int) cp = x;
    for (int i = 0; i < 3; i++) {
        if (i == 0)
            cp[0]=x[0]+c;
        else if (i == 1)
            cp[2]=x[2]+c;
        else cp[5]=x[5]+c;
        cout << "! ";
        for (auto &d : cp) cout << d << " ";
        cout << endl;
        string ans = string(6,' ');
        for (int j = 0; j < 6; j++) {cin >> ans[j];}
        if (check(ans)) return;
        cp=x;
    }
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cp[0]=x[0]+c/2;
            cp[1]=x[1]+c/2;
        }
        else if (i == 1) {
            cp[2]=x[2]+c/2;
            cp[3]=x[3]+c/2;
        }
        else{
            cp[4]=x[4]+c/2;
            cp[5]=x[5]+c/2;
        }
        cout << "! ";
        for (auto &d : cp) cout << d << " ";
        cout << endl;
        string ans = string(6,' ');
        for (int j = 0; j < 6; j++) {cin >> ans[j];}
        if (check(ans)) return;
        cp=x;
    }
    for (int i= 0; i < 3;i++) {
        if (i == 0) {
            cp[0]=x[0]+c/4;
            cp[1]=x[1]+c/4;
            cp[2]=x[2]+c/4;
            cp[3]=x[3]+c/4;
        }
        else if (i == 1) {
            cp[2]=x[2]+c/4;
            cp[3]=x[3]+c/4;
            cp[4]=x[4]+c/4;
            cp[5]=x[5]+c/4;
        }
        else {
            cp[0]=x[0]+c/4;
            cp[1]=x[1]+c/4;
            cp[4]=x[4]+c/4;
            cp[5]=x[5]+c/4;
        }
        cout << "! ";
        for (auto &d : cp) cout << d << " ";
        cout << endl;
        string ans = string(6,' ');
        for (int j = 0; j < 6; j++) {cin >> ans[j];}
        if (check(ans)) return;
        cp=x;
    }
    for (int i = 0;i < 6;i++) {
        cp[i]+=c/6;
    }
    cout << "! ";
    for (auto &d : cp) cout << d << " ";
    cout << endl;
    string ans = string(6,' ');
    for (int j = 0; j < 6; j++) {cin >> ans[j];}
    if (check(ans)) return;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
