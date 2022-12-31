#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
void change_state(vector<vector<int>>& v, int i, int j, int t)
{
    if (!t)
        return;

    set<pair<int, int>> n;
    n.insert({i,j});
    for (int k = 0; k < 4; k++) {
        if (k == 0 && i-1 >= 0)
            n.insert({i-1, j});
        else if (k == 1 && j-1 >= 0)
            n.insert({i, j-1});
        else if (k == 2 && i+1 < 3)
            n.insert({i+1, j});
        else if (k == 3 && j+1 < 3)
            n.insert({i, j+1});
    }
    for (int g = 0; g < t; g++) {
        for (int k = 0; k < 3; k++) {
            for (int m = 0; m < 3; m++) {
                if (n.count({k, m})) {
                    if (v[k][m] == 1)
                        v[k][m] = 0;
                    else
                        v[k][m] = 1;
                }
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> start = {{1,1,1},{1,1,1},{1,1,1}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int t; cin >> t;
            change_state(start, i, j, t);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << start[i][j];
        cout << endl;
    }
    return 0;
}
