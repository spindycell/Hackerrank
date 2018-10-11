#include<bits/stdc++.h>
using namespace std;
int t,n,arr[100005];
int main(){
    cin >> n >> t;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int a=0; a<t; a++){
        int i,j,mins = 10000005;
        cin >> i >> j;
        for(int b=i; b<=j; b++){
            mins = min(mins,arr[b]);
        }
        cout << mins <<endl;
    }
}
