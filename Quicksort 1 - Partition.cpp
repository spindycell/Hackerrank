#include<bits/stdc++.h>
using namespace std;
int n,arr[1005];
vector<int> kiri,kanan;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int p=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<p) kiri.push_back(arr[i]);
        else kanan.push_back(arr[i]);
    }
    for(int i=0; i<kiri.size(); i++){
        cout << kiri[i] << " ";
    }
    cout << p << " ";

    for(int i=0; i<kanan.size(); i++){
        cout << kanan[i] << " ";
    }
}
