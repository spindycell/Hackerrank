#include<bits/stdc++.h>
using namespace std;
int n,k,jum,a,x,hasil;
int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a;
        if(i!=k){
            jum+=a;
        }
    }

    cin >> x;

    hasil = x-jum/2;
    if(hasil==0){
        cout << "Bon Appetit";
    } else {
        cout << hasil;
    }
    cout << endl;
}
