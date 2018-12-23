#include<bits/stdc++.h>
using namespace std;
int t,n,m,x;
int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n];
        int ans=0;
        for(int i=0; i<n; i++){
            cin>>x;
            ans^=x;
            //cout << ans << ' ';
        }
        if(ans!=0) cout << "First" <<endl;
        else cout << "Second" << endl;
    }
}

