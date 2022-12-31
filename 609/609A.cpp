#include <bits/stdc++.h>
using namespace std;

int
main(void)
{
    int n, m; cin >> n >> m;
    vector<int> mem;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mem.push_back(temp);
    }
    sort(mem.begin(), mem.end());
    int sum = 0;
    int k = 0;
    for (int i = n-1; m-sum > 0; i--)
    {
        sum += mem[i];
        k++;
    }
    cout << k << endl;
    return 0;
}
