#include<bits/stdc++.h>
using namespace std;
int p,d,m,your,ans;
int main(){
    cin >> p >> d >> m >> your;
    while(p>m && your > p){
        your -= p;
        p-=d;
        ans ++;
    }
    if(p<=m) cout << ans + your/m <<endl;
    else  cout << ans <<endl;
}
