#include<bits/stdc++.h>
using namespace std;
int n,arr[10005],temp;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        for(int j=i; j>=0; j--){
            if(arr[j]<arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        for(int j=0; j<n; j++){
            cout << arr[j]  << " ";
        }
        cout << endl;
    }

}
