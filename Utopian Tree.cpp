#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int ans=1,j=1;
        while(j<=n){
            if(j%2==0){
                ans++;
            } else {
                ans *=2;
            }
            j++;
        }
        cout << ans <<endl;
    }
}
