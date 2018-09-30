#include<bits/stdc++.h>
using namespace std;
int n,m,hasil,j;
int arr[1001];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i+=m){
        j = arr[i];
        m = count(arr,arr+n,j);
        hasil += m/2;
    }
    cout << hasil <<endl;
}
