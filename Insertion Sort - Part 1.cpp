#include<bits/stdc++.h>
using namespace std;
int n,arr[10005];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int temp = 0;
    for(int i=n-1; i>=0; i--){
        if(arr[i]<arr[i-1]){
            temp = arr[i];
            arr[i] = arr[i-1];
        }
        for(int j=0; j<n; j++){
            cout << arr[j] << " ";
        }
        if(arr[i]<=arr[i-1]) arr[i-1] = temp;
        else return 0;
        cout << endl;
    }
}
