#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll k = 0, bagi = 1;
        if(m==0){
            for(int i=1; i<=n; i++){
                cout << i << ' ';
            }
            cout << endl;
        }
        else if(n%2==0 && (n/m)%2==0 && n%m==0){
            for(int i=1; i<=n; i++){
                if(k==m){
                    k=0;
                    bagi++;
                }
                if(k<m){
                    if(bagi%2==1)
                        cout << i+m << ' ';
                    else
                        cout << i-m << ' ';
                    k++;
                }
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
