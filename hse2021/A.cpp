#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

#define int ll

typedef struct p {
    char type;
    int x, y;
} p;

void set_type(p* point) {
    int dx = abs(0-point->x), dy = abs(0-point->y);
    char temp_t = (dx%2) ? 'b' : 'w';
    point->type = (dy%2) ? ((temp_t == 'b') ? 'w' : 'b') : temp_t;
}

p init_p(int x, int y, char t) {
    p __p;
    __p.x = x;
    __p.y = y;
    __p.type = t;
    return __p;
}

void solve() {
    p start, end;
    cin >> start.x >> start.y >> end.x >> end.y;
    set_type(&start);
    set_type(&end);
    if (end.type == 'w' && (start.x != end.x || start.y != end.y)) {
        cout << -1 << endl;
        return;
    }
    else if (end.type == 'w' && start.x == end.x && start.y == end.y) {
        cout << 0 << endl;
        return;
    }

    if (start.type == 'w') {
        V(p) moves (8);
        moves[0] = init_p(start.x+2, start.y+1, 'b');
        moves[1] = init_p(start.x+2, start.y-1, 'b');
        moves[2] = init_p(start.x+1, start.y-2, 'b');
        moves[3] = init_p(start.x-1, start.y-2, 'b');
        moves[4] = init_p(start.x-2, start.y+1, 'b');
        moves[5] = init_p(start.x-2, start.y-1, 'b');
        moves[6] = init_p(start.x+1, start.y+2, 'b');
        moves[7] = init_p(start.x-1, start.y+2, 'b');

        for (int i = 0; i < 8; i++)
            if (moves[i].x == end.x && moves[i].y == end.y) {
                cout << 1 << endl;
                cout << moves[i].x << " " << moves[i].y << endl;
                return;
            }
        for (int i = 0; i < 8; i++) {
            if (abs(moves[i].x-end.x) == abs(moves[i].y-end.y)) {
                cout << 2 << endl;
                cout << moves[i].x << " " << moves[i].y << endl;
                cout << end.x << " " << end.y << endl;
            }
        }
        int x2 = moves[0].x, y2 = moves[0].y;
        while (x2 < 1e9 && abs(x2-end.x) != abs(y2-end.y)) {
            x2++;y2++;
        }
        cout << 3 << endl;
        cout << moves[0].x << " " << moves[0].y << endl;
        cout << x2 << " " << y2 << endl;
        cout << end.x << " " << end.y << endl;
    }
    else {
        if (abs(start.x-end.x) == abs(start.y-end.y)) {
            cout << 1 << endl;
            cout << end.x << " " << end.y << endl;
        }
        else {
            int x2 = start.x, y2 = start.y;
            while(x2 < 1e9 && abs(x2-end.x) != abs(y2-end.y)) {
                x2++;
                y2++;
            }
            cout << 2 << endl;
            cout << x2 << " " << y2 << endl;
            cout << end.x << " " << end.y << endl;
        }
    }

}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
