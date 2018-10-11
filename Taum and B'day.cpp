#include<bits/stdc++.h>
using namespace std;
long long t,b,w,bc,wc,x;
int main(){
    cin >> t;
    while(t--){
        cin >> b >> w;
        cin >> bc >> wc >> x;
        long long ans= b*bc + w*wc;
        long long hitung = 0;
        if(bc<wc) {
            wc = bc;
            hitung = (wc+x)*w + bc*b;
        } else {
            bc = wc;
            hitung = (bc+x)*b + wc*w;
        }
        if(hitung < ans) cout << hitung <<endl;
        else cout << ans << endl;
    }
}
