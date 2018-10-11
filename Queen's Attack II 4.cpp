#include <bits/stdc++.h>
using namespace std;

#define TRACE(x) x
#define WATCH(x) TRACE(cout << #x" = " << x << endl)
#define WATCHR(a, b) TRACE(for (auto it=a; it!=b;) cout << *(it++) << " "; cout << endl)
#define WATCHC(V) TRACE({cout << #V" = "; WATCHR(V.begin(), V.end());})

#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(15);

    const int INF = 1e9;
    const int dir[8][2] = { {1, 0}, {1, 1}, {0, 1}, {-1, 1},
                            {-1, 0}, {-1, -1}, {0, -1 }, {1, -1} };

    ll N, K, R, C;
    cin >> N >> K >> R >> C;

    vll dist(8, INF);

    for (int i = 0; i < K; i++) {
        ll X, Y;
        cin >> X >> Y;

        for (int d = 0; d < 8; d++) {
            ll far = (dir[d][0]) ? ((X - R) / dir[d][0]) : ((Y - C) / dir[d][1]);
            if (far > 0 && (R + far * dir[d][0] == X) && (C + far * dir[d][1] == Y)) {
                dist[d] = min(dist[d], far);
            }
        }
    }

    ll ans = 0;
    for (int d = 0; d < 8; d++) {
        ll go = INF;
        if (dir[d][0] == -1) go = min(go, R - 1);
        if (dir[d][0] == 1) go = min(go, N - R);
        if (dir[d][1] == -1) go = min(go, C - 1);
        if (dir[d][1] == 1) go = min(go, N - C);
        //cout << "Can attack " << min(go, dist[d] - 1) << " cells in dir " << dir[d][0] << ", " << dir[d][1] << endl;
        ans += min(go, dist[d] - 1);
    }
    cout << ans << endl;
    return 0;
}
