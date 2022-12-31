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

#define dd cout << i << " " << j << endl

V<V<int>> a;
void print(int i, int j, int n, int c) {
    while(j > n-c) {
        cout << a[i][j] << endl;
        i++;
        j--;
    }
    while(i < n+c) {
        cout << a[i][j] << endl;
        i++;
        j++;
    }
    while(j < n+c) {
        cout << a[i][j] << endl;
        i--;
        j++;
    }
    while(i > n-c) {
        cout << a[i][j] << endl;
        i--;
        j--;

    }
} 

void solve() {
    int n;
    cin >> n;
    a = V<V<int>> (n,V<int>(n));
    for(auto& x : a)
        cin >> x;

    int c = n/2;
    cout << a[c][c] << endl;
    for(int i = 1; c-i >= 0; ++i) {
        print(n/2-i, n/2, c,i);
    }
}

signed main(void)
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);

    solve();
    return 0;
}
