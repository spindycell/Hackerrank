#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,sum=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2==1) sum^=i;
        }
        if(sum!=0) cout << "First\n";
        else cout << "Second\n";
    }
}
