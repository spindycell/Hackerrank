#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k;
    int arr[n];
    int page=1;
    int ans =0;
    for(int i=0; i<n; i++){
        cin >> m;
        int idx = 1;
        for(int j=1; j<=m; j++){
            if(idx>k) {
                page++;
                idx=1;
            }
            if(j == page) ans++;
            idx++;
        }
        page++;
    }
    cout << ans << endl;
}
