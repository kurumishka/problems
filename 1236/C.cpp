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

class Group {
    public:
    int sum;
    V(int) elems;
    Group();
};

Group::Group(){
    this->sum = 0;
}


void solve() {
    int n;
    cin >> n;
    V(Group) v (n, Group());
    int k = n*n;
    while (k) {
        auto pt = v.begin();
        for (int i = 0; i < v.size(); i++)
            if (v[i].sum < pt->sum) pt = v.begin()+i;
        pt->elems.pb(k);
        pt->sum+=k;
        k--;
    }
    for (auto &g : v) {
        for (auto &x : g.elems) cout << x << " ";
        cout << endl;
    }
}

int main(void)
{
    SUPER_DUPER_FAST;
    solve();
    return 0;
}
