#include<bits/stdc++.h>
using namespace std;
int t,a,b;

int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        int x = sqrt(a);
        int ans = sqrt(b) - x;
        if(x * x == a) ans++;
        cout << ans << "\n";
    }
}
/*
        ll idx=0,ans=0;
        //cout <<  fmod(temp,1) << endl;

        while(a<=b){
            ll temp = sqrt(a);
            if(fmod(temp,1)==0) {
                ans++;
                idx = temp * 2 + 1;
                a--;
                a+=idx;
            }
            a++;
        }

        cout << ans << endl;
*/
