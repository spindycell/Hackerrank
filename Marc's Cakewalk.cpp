#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n; i++){
        ans += pow(2,i)*arr[i];
    }
    cout << ans <<endl;
}
