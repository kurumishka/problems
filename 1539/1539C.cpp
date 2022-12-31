#include <bits/stdc++.h>
using namespace std;
typedef long long ull;

#define loop(zero, v) for (int i = zero; i < v; i++)
#define all(x) x.begin(),x.end()

int
main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n,k,x; cin >> n >> k >> x;

    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }

    vector<ull> _every (n);
    loop(0,n)
    {
        ull temp; cin >> temp;
        _every[i] = temp;
    }

    sort(all(_every));
    vector<vector<ull>> _groups;
    vector<ull> temp, diff;

    loop(0,n-1)
    {
        if (_every[i+1] - _every[i] > x)
        {
            temp.push_back(_every[i]);
            diff.push_back(_every[i+1]-_every[i]);
            _groups.push_back(temp);
            temp.clear();
            if (i == n-2)
            {
                temp.push_back(_every[i+1]);
                _groups.push_back(temp);
                temp.clear();
            }
            continue;
        }
        temp.push_back(_every[i]);
        if (i == n-2)
        {
            _groups.push_back(temp);
            temp.clear();
            break;
        }
    }

    if (!k)
    {
        cout << _groups.size() << "\n";
        return 0;
    }

    ull sum = _groups.size();
    sort(all(diff));

    loop(0, diff.size())
    {
        long double curr_diff = diff[i];
        long long s = ceil(curr_diff/x) - 1;
        if (k >= s)
        {
            k-=s;
            sum--;
        }
        if (k <= 0)
            break;
    }

    cout << ( (sum > 0) ? sum : 0 ) << "\n";
    return 0;
}
