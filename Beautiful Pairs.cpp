#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    map<int,int> arr;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
    }
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]--;
    }
    int alone = 0;
    map<int,int>::iterator it = arr.begin();
    while(it!=arr.end()){
        if(it->second != 0){
            alone+=abs(it->second);
        }
        it++;
    }
    alone >>= 1; // Destructive bitset to right atau hasilnya akan membagi value menjadi 2..
    if(alone==0) cout << n - 1 << '\n';
    else cout << n - alone + 1 << '\n';
}
