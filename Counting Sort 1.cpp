#include<bits/stdc++.h>
using namespace std;
int n,x,arr[1000005];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
    }
    for(int i=0; i<100; i++){
        cout << arr[i] << " " ;
    }
}
