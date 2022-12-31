#include <bits/stdc++.h>
using namespace std;

main()
{
    int n; cin >> n;
    int l1, r1, l2, r2;
    while (n--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 != r2)
            cout << l1 << " " << r2 << "\n";
        else
            cout << l1 << " " << l2 << "\n";
    }

    return 0;
}
