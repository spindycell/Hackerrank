#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string s){
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
            return true;
    else return false;
}
int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        int ans = 0;
        int panjang = s.length()-1;
        int batas = s.length()/2;
        for(int i=0; i<batas; i++){
            if(s[i]!=s[panjang]) ans += abs(s[i]-s[panjang]);
            panjang--;
        }
        cout << ans << endl;
    }
}
