#include<bits/stdc++.h>
using namespace std;

long long i,j,k,num,ans,hitung,balik,temp;

int main(){
    cin >> i >> j >>k;
    for(; i<=j; i++){
        num = i;
        balik = 0;
        while(num != 0){
            temp = num % 10;
            balik = 10 * balik + temp;
            num = num/10;
        }
        hitung = abs(i-balik);
        if(hitung%k==0) ans++;
    }
    cout << ans << endl;
}
