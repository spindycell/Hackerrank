#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i = 0; i < s1.length(); i++) {
        for(int j = 0; j < s2.length(); j++) {
            if(s1[i] == s2[j]) {
                s1.erase(i,1);
                s2.erase(j,1);
                i--;
                j--;
                //cout << i << " " << j << endl;
                //cout << s1 << " " << s2 << endl;
                break;
            }
        }
    }
    cout << s1.length()+s2.length() << endl;
    return 0;
}
