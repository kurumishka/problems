#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define F first
#define S second

template<typename T>
T t_max(T const &a, T const &b, T const &c) {
    return max(max(a,b),c);
}

template<typename T>
void fill_vector(vector<T>& v, int n) {
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}
void FAST() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    FAST();
    times
    {
        ll n;
        cin >> n;
        cout << (n-1)/2 << " " << (n-1) << endl;
    }
    return 0;
}
