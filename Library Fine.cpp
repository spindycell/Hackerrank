#include<bits/stdc++.h>
using namespace std;

int main(){
    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    int ans=0;
    bool terlambat = false;
    if(y1>y2){
        ans = 10000 * (y1-y2);
        terlambat = true;
    }
    else if(m1>m2){
        ans = 500*(m1-m2);
        if(y1==y2) terlambat = true;
    }
    else if(d1>d2){
        ans = 15*(d1-d2);
        if(m1==m2 && y1==y2) terlambat = true;
    }

    if(ans>0 && terlambat) cout << ans <<endl;
    else cout << 0 << endl;
}
