#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans;
int main(){
    cin >> n >> m;
    while(n--){
        cin >> x;
        if(x>m){
            ans += x-m;
            m = x;
        }
    }
    cout << ans <<endl;
}
