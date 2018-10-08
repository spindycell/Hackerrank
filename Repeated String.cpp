#include<bits/stdc++.h>
using namespace std;

string s;
long long n,ans,hasil,m;

int main(){
    cin >> s;
    cin >> n;
    m = s.length();
    int batas = n%m;
    hasil = n/m;
    ans = count(s.begin(),s.end(), 'a');
    if(n%m==0) ans = ans*hasil;
    else {
        ans = ans*hasil;
        for(int i=0; i<batas; i++){
            if(s[i]=='a') ans++;
        }
    }
    cout << ans <<endl;
}
