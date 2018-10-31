#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,arr[1000005],mins=100000;
int main(){
    vector<ll> ans;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=1; i<n; i++){
        ll temp = abs(arr[i]-arr[i-1]);
        if(temp<mins) {
            mins =temp;
            ans.clear(); //jika masih ada yang lebih kecil di clear
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
        } else if(temp==mins){ // jika temp sama dengan mins maka tinggal di push
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
