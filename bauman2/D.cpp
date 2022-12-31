#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n, m;
    double k;
    cin >> n >> m >> k;
    V(V(int)) a(n, V(int) (m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vector<vector<vector<vector<int>>>> min_elem(n,vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(m, 1e9))));
    vector<vector<vector<vector<int>>>> max_elem(n,vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(m, -1e9))));

    int sum[n][m][n][m];
    memset(sum, 0, sizeof(sum));

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            for (int h = i; h < n; h++) 
                for (int g = j; g < m; g++) {
                    max_elem[i][j][h][g] = max(max_elem[i][j][h][g], a[h][g]);
                    min_elem[i][j][h][g] = min(min_elem[i][j][h][g], a[h][g]);
                    if (h-i != 0) {
                        max_elem[i][j][h][g] = max(max_elem[i][j][h][g], max_elem[i][j][h-1][g]);
                        min_elem[i][j][h][g] = min(min_elem[i][j][h][g], min_elem[i][j][h-1][g]);
                    }
                    if (g-j != 0) {
                        max_elem[i][j][h][g] = max(max_elem[i][j][h][g], max_elem[i][j][h][g-1]);
                        min_elem[i][j][h][g] = min(min_elem[i][j][h][g], min_elem[i][j][h][g-1]);
                    }
                    if (g-j != 0 && h-i != 0) {
                        max_elem[i][j][h][g] = max(max_elem[i][j][h][g], max_elem[i][j][h-1][g-1]);
                        min_elem[i][j][h][g] = min(min_elem[i][j][h][g], min_elem[i][j][h-1][g-1]);
                    }
                }

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            for (int h = i; h < n; h++) 
                for (int g = j; g < m; g++) {
                    int add = 0;
                    if (a[h][g] > 0) add = a[h][g];

                    if (i == 0 && j == 0) {
                        if (h == 0 && g == 0)
                            sum[i][j][h][g] = add;
                        else if (h != 0 && g == 0)
                            sum[i][j][h][g] = add+sum[i][j][h-1][g];
                        else if(h == 0 && g != 0)
                            sum[i][j][h][g] = add+sum[i][j][h][g-1];
                        else
                            sum[i][j][h][g] = add+sum[i][j][h][g-1]+sum[i][j][h-1][g]-sum[i][j][h-1][g-1];
                    }
                    
                    else if (i != 0 && j != 0)
                        sum[i][j][h][g] = add+sum[0][0][h-1][g]+sum[0][0][h][g-1]-sum[0][0][h-1][g-1];
                    else if (i == 0 && j != 0)
                        sum[i][j][h][g] = add+sum[0][0][h][g]-sum[0][0][h][j-1];
                    else
                        sum[i][j][h][g] = add+sum[0][0][h][g]-sum[0][0][i-1][g];
                }
    int x1,x2,y1,y2,sz;
    x1=x2=y1=y2=sz-1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m;j++)
            for(int h =i;h<n;h++)
                for(int g=j;g<m;g++) {
                    //double count = (h+1)*(g+1), mid;
                    //if (j != 0 && i != 0)
                    //    count = count - i*(g+1)-j*(h+1)+(i*j);
                    //else if (j ==0 && i!=0)
                    //    count = count - i*(g+1);
                    //else if (j!=0 && i == 0)
                    //    count = count - j*(h+1);
                    int count = 0;
                    int wholesz = 0;
                    bool ok = true; 
                    for (int q = i; q <= h; q++)
                        for (int e = j; e <= g; e++) {
                            if (a[q][e] > 0) count++;
                            wholesz++;
                            if (q != i) {
                                if (a[q-1][e] < a[q][e]) {
                                    ok = false;
                                    goto end;
                                }
                            }
                            if (e != j) {
                                if (a[q][e-1] < a[q][e]) {
                                    ok = false;
                                    goto end;
                                }
                            }
                        }
                    end:
                    if (!ok) continue;

                    double mid = (double)sum[i][j][h][g]/(double)count;
                    if (mid <= k) continue;
                    if (wholesz >= sz) {
                        x1=i+1;
                        x2=h+1;
                        y1=j+1;
                        y2=g+1;
                        sz=wholesz;
                    }
                }

    if (sz == -1) cout << "NO" << endl;

    else cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;


    //for (int i = 0; i < n; i++) {
    //    for (int j = 0; j < m; j++)
    //        cout << sum[0][0][i][j] << " ";
    //    cout << endl;
    //}
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
