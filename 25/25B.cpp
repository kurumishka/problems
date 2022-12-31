#include <bits/stdc++.h>
using namespace std;

#define loop(zero, v) for (int i = zero; i < v; i++)

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string num; cin >> num;

    bool ie = false;
    if (!(n%2))
        ie = true;

    string result = string();
    loop(0,n)
    {
        if (ie)
        {
            if (!(i%2) && i)
                result += "-";
        }
        else
        {
            if (!(i%2) && i<n-2 && i)
                result += "-";
        }
        result += num[i];
    }
    cout << result << "\n";
    return 0;
}
