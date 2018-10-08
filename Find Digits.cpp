#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ll m = x;
        ll ans = 0;
        while(x>0){
            if(x%10 != 0 && m%(x%10)==0 ) ans++; // if tanpa braket hanya untuk 1 perintah
            x /= 10;
        }
        cout << ans <<endl;
    }
}
/*
11
123456789
114108089
110110015
121
33
44
55
66
77
88
106108048
*/
