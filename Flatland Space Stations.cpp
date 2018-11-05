//https://www.hackerrank.com/challenges/flatland-space-stations/problem
// dapat menanganni bigvalue
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, t;
    vector<ll> v;
    cin >> n >> m;
    for (ll i = 0; i < m; ++i) {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    t = v[0]; //max(0, (int)v[0]);
    for (std::vector<ll>::iterator it = v.begin() + 1; it != v.end(); ++it) {
        t = max(t, (*it - *(it - 1)) / 2); //value ke it dikurangi value ke it-1 dibagi 2
    }
    t = max(t, n - 1 - *(v.end() - 1)); //bandingkan dengan n-1 - value terakhir
    cout << t << endl;
}
