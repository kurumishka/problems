#include <bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v;
        int temp, sum;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            if (!i)
            {
                if (v[i+1] < v[i])
                {
                    sum+=(v[i]-v[i+1]);
                    v[i] -= (v[i]-v[i+1]);
                    sum+=v[i];
                }
                else
                    sum+=v[i];
            }
            else if (i+1 == n)
            {
                if (v[i-1] < v[i])
                {
                    sum +=(v[i]-v[i-1]);
                    v[i]-=(v[i]-v[i-1]);
                    sum+=v[i];
                }
                else
                    sum+=v[i];
            }
            else
            {
                if (v[i] > v[i-1] && v[i] > v[i+1])
                {
                    sum += (v[i]-max(v[i-1],v[i+1]));
                    v[i] -= (v[i]-max(v[i-1],v[i+1]));
                }
                if (v[i]-min(v[i-1], v[i+1]) < 0)
                    continue;
                else
                    sum += v[i]-min(v[i-1], v[i+1]);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
