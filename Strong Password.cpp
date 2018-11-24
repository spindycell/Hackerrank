#include <bits/stdc++.h>
using namespace std;

int check(string s, string w) {
  for (char c : s) {
    if (w.find(c) != string::npos) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string numbers = "0123456789";
  string lower_case = "abcdefghijklmnopqrstuvwxyz";
  string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string special_characters = "!@#$%^&*()-+";
  int ans = 0;
  ans += check(s, numbers);
  ans += check(s, lower_case);
  ans += check(s, upper_case);
  ans += check(s, special_characters);
  ans = max(ans, 6 - n);
  printf("%d\n", ans);
  return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
bool clil,bigs,spes,nums;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    if(n==1){
        cout <<5;
        return 0;
    } else if(n==2){
        cout <<4;
        return 0;
    } else if(n==3){
        cout <<3;
        return 0;
    }
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(isupper(s[i]))bigs=true;
            else clil=true;
        } else if(strchr("!@#$%^&*()-+",s[i])){
            spes=true;
        }
        else nums=true;
    }
    int ans=0;
    if(!clil)ans++;
    if(!bigs)ans++;
    if(!spes)ans++;
    if(!nums)ans++;

    if( (ans==0||ans==1) && n<6)cout << 6-n<<endl;
    else cout << ans<<endl;
}

*/
