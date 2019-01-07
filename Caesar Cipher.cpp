#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    string s,ans="";
    cin >> s;
    cin >> x;

    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            int temp = (int)s[i]+x;
            while(temp >122){
                temp-=26;
            }
            ans += (char)temp;
        } else if(s[i]>='A' && s[i]<='Z'){
            int temp = (int)s[i]+x;
            while(temp >90){
                temp-=26;
            }
            ans += (char)temp;
        } else ans+=s[i];
    }
    cout << ans << endl;
}
