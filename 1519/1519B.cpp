#include <iostream>
typedef unsigned short us;
using namespace std;

struct point {
    us x;
    us y;
};

int main(void)
{
    us t, n, m, k;
    struct point start;
    us d = 0;
    cin >> t;
    while (t--)
    {
        start = {1, 1};
        cin >> n >> m >> k;
        while (k > 0)
        {   if (start.x != n && k >=start.y)
                {k-=start.y;start.x++;continue;}

            if (start.y != m && k>=start.x)
                {k-=start.x;start.y++;continue;}

            if (start.x == n && start.y == m) break;
            if (start.x > k || start.y > k) break;
        }
        if (start.x == n && start.y == m && k == 0) {cout << "YES" << endl;}
        else cout << "NO" << endl;
    }
    return 0;
}
