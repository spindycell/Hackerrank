#include<bits/stdc++.h>
using namespace std;
int t,n,a,b,maks,mins,bigest,selisih,pos;
int main(){
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        if(a>b)maks=a,mins=b;
        else maks=b,mins=a;
        n--;
        pos = mins*n;
        bigest = maks*n;
        selisih = maks-mins;
        if(maks==mins){
            cout << pos <<endl;
        } else {
            int ans=0;
            while(pos<=bigest){
                ans = pos;
                cout << ans << " ";
                pos += selisih;
            }
            cout << endl;
        }
    }
}
