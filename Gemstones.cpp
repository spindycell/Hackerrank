#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int hist[26];
    fill(hist, hist+26, -1);

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for(int j = 0; j < s.length(); j++)
            if(hist[s[j]-'a'] == i-1) hist[s[j]-'a'] += 1;
    }

    int c = 0;
    for(int i = 0; i < 26; i++)
        if(hist[i] == n-1) c++;

    cout << c << endl;
    return 0;
}
