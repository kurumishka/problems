#include <bits/stdc++.h>
using namespace std;
typedef long int li;


int
main(void)
{
    struct di { li f; li f_i; li s; li s_i; li diff; };
    struct di d;
    unsigned short t; cin >> t;
    while (t--)
    {
        li n, temp1; cin >> n;
        vector<li> v;
        d.f = d.f_i = d.s = d.s_i = d.diff = 1000000001;
        for (li i = 0; i < n; i++)
        {
            cin >> temp1;
            v.push_back(temp1);
        }
        sort(v.begin(), v.end());

        if (v.size() == 2)
        {
            cout << v[0] << " " << v[1] << endl;
            continue;
        }

        // reverse(v.begin(), v.end());
        for (li i = 1; i < n; i++)
        {
            if (abs(v[i-1]-v[i]) < d.diff)
            {
                d.f = v[i-1]; d.s = v[i]; d.f_i = i-1; d.s_i = i;
                d.diff = abs(v[i-1]-v[i]);
            }
            if (!d.diff)
                break;
        }

        for (li i = d.s_i ; i < n ; i++)
        { cout << v[i] << " "; }

        for (li i = 0; i < d.s_i ; i++)
            {cout << v[i] << " "; }
        cout << endl;
    }

    return 0;
}
