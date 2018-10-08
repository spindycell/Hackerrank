#include<bits/stdc++.h>
using namespace std;
int t,n,k,m;
int main(){
    cin >> t;
    while(t--){
        cin  >> n >> m;
        int ans = 0;
        for(int i=0; i<n; i++){
            cin >> k;
            if(k<=0) ans++;
        }
        if(ans>=m) cout << "NO" <<endl;
        else cout << "YES" <<endl;
    }
}
