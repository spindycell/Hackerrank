#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string s1,s2;
        map<char,int> kata1;
        set<char> kata2;
        cin >> s1 >> s2;
        for(int i=0; i<s1.length(); i++){
            kata1[s1[i]]++;
        }
        for(int i=0; i<s2.length(); i++){
            kata2.insert(s2[i]);
        }
        //cout << kata2.size() <<endl;
        int ans=0;
        for(std::set<char>::iterator it=kata2.begin(); it!=kata2.end(); ++it){
            if(kata1[*it]>0){
                cout << "YES" <<endl;
                break;
            }
            ans++;
        }
        if(kata2.size()==ans) cout << "NO" <<endl;
    }
}
/*
// krupuk kentang

#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  string s1, s2, victim;
  int i, j, k;
  bool common = false;

  cin >> test;

  for (i = 0; i < test; i++) {
    common = false;
    cin >> s1 >> s2;

    for (j = 97; j <= 122; j++) {
      victim = char(j);
      if (s1.find(victim) != string::npos && s2.find(victim) != string::npos) {
        common = true;
      }
    }

    if (common == true) {
      cout << "YES\n";
    } else
      cout << "NO\n";
  }
}
*/
