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
        vector<string> arr (n);
        for (int i = 0; i<2; i++) {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[1][i] == '1' && arr[0][i] == '0') ans++;
            else if ((arr[1][i] == '1' && arr[0][i] == '1') || (arr[1][i] == '1' && arr[0][i] == '2')) {
                if (i-1 >= 0 || i+1 < n) 
                {
                    if (i-1 >= 0) {
                        if (arr[0][i-1] == '1') {
                            ans++;
                            arr[0][i-1] = '2';
                            continue;
                        }
                    }
                    if (i+1 < n) {
                        if (arr[0][i+1] == '1') {
                            ans++;
                            arr[0][i+1] = '2';
                            continue;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
