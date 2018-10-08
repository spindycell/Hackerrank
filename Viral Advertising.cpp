#include<bits/stdc++.h>
using namespace std;
int n,interest,t=5,ans;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        interest = t/2;
        t = interest * 3;
        ans += interest;
    }
    cout << ans <<endl;
//    f=floor(n);
}
