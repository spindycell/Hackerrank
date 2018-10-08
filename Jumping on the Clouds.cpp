#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,ans=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n;){
        if(arr[i+2]==0){
            i+=2;
            ans++;
        } else {
            i++;
            ans++;
        }
    }
    cout << ans-1 << endl;
}
