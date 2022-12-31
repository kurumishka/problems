#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(x) x.begin(),x.end()

int
main(void)
{
    int n,k; cin >> n >> k;
    if (k > n) {cout << -1 << "\n"; return 0;}

    vector<ll> vll;
    for (ll temp = 0; cin >> temp;)
        vll.push_back(temp);

    sort(all(vll));
    reverse(all(vll));

    ll temp;
    int i = 0;
    for (; i < k; i++)
        temp = vll[i];

    if (i < vll.size())
    {
        if (temp == vll[i])
            {cout << -1 << "\n";}
        cout << temp << " " << temp << "\n";
    }
    else
        cout << temp << " " << temp << "\n";
    return 0;
}
