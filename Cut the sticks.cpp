#include<bits/stdc++.h>
using namespace std;
int n,arr[1005],mins=10000,maks;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mins = min(mins,arr[i]);
        maks = max(maks,arr[i]);
    }
    for(int i=maks; i>=0; ){
        int ans = 0,mins = maks;
        for(int j=0; j<n; j++){
            if(arr[j] != 0){
                mins = min(mins,arr[j]);
            }
        }
        for(int j=0; j<n; j++){
            if(arr[j]>=mins){
                ans++;
                arr[j] -= mins;
            }
            //cout << arr[j] << " ";
        }
        i-=mins;
        //cout << mins << " ";
        if(ans<=0) return 0;
        else cout << ans <<endl;
        if(ans==1) return 0;
    }
}
