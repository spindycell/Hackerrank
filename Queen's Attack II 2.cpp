#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int N, K, RQ, CQ;

int dr[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
int dc[8] = { 1, 0, -1, -1, -1, 0, 1, 1 };

// 0: for constant R
// 1: for constant C

int len[8];

int main() {
    cin >> N >> K >> RQ >> CQ;
    RQ--; CQ--;

    for (int dir = 0; dir < 8; dir++) {
        int er = INF, ec = INF;
        if (dr[dir] == 1) {
            er = N - RQ - 1;
        } else if(dr[dir] == -1) {
            er = RQ;
        }

        if (dc[dir] == 1) {
            ec = N - CQ - 1;
        } else if(dc[dir] == -1) {
            ec = CQ;
        }

        len[dir] = min(er, ec);
    }

    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        r--; c--;

        for (int dir = 0; dir < 8; dir++) {
            if (dr[dir] == 0 && r != RQ) continue;
            if (dc[dir] == 0 && c != CQ) continue;

            int er = INF, ec = INF;
            if (dr[dir]) {
                er = (r - RQ) / dr[dir] - 1;
            }

            if (dc[dir]) {
                ec = (c - CQ) / dc[dir] - 1;
            }

            if (ec < 0 || er < 0) continue;

            if (er == INF) {
                len[dir] = min(len[dir], ec);
            } else if (ec == INF) {
                len[dir] = min(len[dir], er);
            } else if (er == ec) {
                len[dir] = min(len[dir], ec);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        cerr << "DIR " << dr[i] << ", " << dc[i] << " : " << len[i] << endl;
        sum += len[i];
    }
    cout << sum << endl;
    return 0;
}
