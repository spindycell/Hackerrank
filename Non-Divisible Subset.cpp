#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll nonDivisibleSubset(map<ll,ll> arr,ll k){
    ll ans = 0;
    for(int j=1; j<=(k/2); j++){
        if(j==k-j) ans++;
        else ans+=max(arr[j],arr[k-j]);
    }
    if(arr[0]>0)ans++;
    return ans;
}

int main(){
    ll n,k;
    cin >> n >> k;
    map<ll,ll> arr;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        arr[x%k]++;
    }
    cout << nonDivisibleSubset(arr,k) << endl;
}
