#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int x)
{
    x++;
    while (!(x%10))
        x/=10;
    return x;
}

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    unordered_set<int> ss;
    ss.insert(n);
    int temp;
    while (1)
    {
        temp = f(n);
        if (ss.count(temp))
            break;
        ss.insert(temp);
        n=temp;
    }
    cout << ss.size() << "\n";
    return 0;
}