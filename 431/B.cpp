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
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    vector<ll> v (5);
    for (int i = 0; i < 5; i++) {
        v[i] = i;
    }
    vector<vector<ll>> perms;
    do {
        perms.pb(v);
    } while (next_permutation(all(v)));

    ll max_sum = 0;
    vector<ll> curr_perm;
    for (int i = 0; i < perms.size(); i++) {
        curr_perm = perms[i];
        ll local_sum = 0;
        for (int j = 0; j < 5; j++) {
            for (int k = j; k < 5; k+=2) {
                if (k+1<5) {
                    local_sum+=arr[curr_perm[k]][curr_perm[k+1]]+arr[curr_perm[k+1]][curr_perm[k]];
                }
            }
        }
        if (local_sum > max_sum) max_sum = local_sum;
    }
    cout << max_sum << endl;
    return 0;
}
