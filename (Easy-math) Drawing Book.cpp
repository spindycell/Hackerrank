#include<bits/stdc++.h>
using namespace std;
int n,m,depan,belakang,hasil;
int main(){
    cin >> n >> m;
    if(n%2==0 && m!=1) belakang = n+1;
    else belakang = n;
    if(m%2==0) depan = m+1;
    else depan = m;

    if(m>n/2) hasil = (belakang-m)/2;
    else hasil = (depan-1)/2;

    cout << hasil <<endl;

}
