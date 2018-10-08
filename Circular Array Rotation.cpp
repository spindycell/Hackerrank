#include<bits/stdc++.h>
using namespace std;
long long n,m,x,a,b,c,cari[100005];
int main(){
    cin >> a >> b >> c;
    for(int i=0; i<a; i++){
        cin >> cari[i];
    }
    m = b % a;
    for(int i=0; i<c; i++){
        cin >> x;
        if(x-m>=0) cout << cari[x-m] <<endl;
        else cout << cari[x-m+a] <<endl;
    }
}

    /* solusi ini RTE
    for(int i=0; i<b; i++){
        int temp = cari[a-1];
        for(int j=a-1; j>0; j--){
            cari[j] = cari[j-1];
        }
        cari[0] = temp;
    }
    /* cek urutan baru
    for(int i=0; i<a; i++){
        cout << cari[i] << " ";
    }
    */
