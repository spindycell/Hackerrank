#include<bits/stdc++.h>
using namespace std;

int calc(const string& s, char a, char b) {
    int r = 0;
    char last = 0;
    for (auto c : s) {
        if (c == last) return 0;
        if (c == a || c == b) last = c, r++;
    }
    if (r < 2) r = 0;
    return r;
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int r = 0;
    for (int i = 'a'; i <= 'z'; i++) {
        for (int j = 'a'; j <= 'z'; j++) {
            if (i != j) r = max(r, calc(s, i, j));
        }
    }
    cout << r << endl;
    return 0;
}
