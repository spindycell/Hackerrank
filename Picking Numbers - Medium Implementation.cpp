#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int n,x,now,hasil=1,temp,maks;
int main(){
    cin >> n;
    for(int i=0 ;i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    now = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]==now){
            hasil++;
        } else if(arr[i]-1==now){
            hasil++;
        } else {
            hasil = 1;
            now = arr[i];
        }
        maks = max(maks,hasil);
    }
    cout << maks <<endl;
}
