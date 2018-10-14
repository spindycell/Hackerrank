#include<bits/stdc++.h>
using namespace std;
int n,x,arr[1000005],mins=100,maks;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
        mins = min(mins,x);
        maks = max(maks,x);
    }
    for(int i=mins; i<=maks; i++){
        while(arr[i]!=0){
            cout << i << " ";
            arr[i]--;
        }
    }
}
