#include<bits/stdc++.h>
using namespace std;
int n,arr[1005],odd,jejer,ans;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2!=0){
            odd++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            ans++;
            arr[i+1]++;
        }
    }
    if(odd%2!=0) cout << "NO" << endl;
    else cout << ans*2 <<endl;
}
