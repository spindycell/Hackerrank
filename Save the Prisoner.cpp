#include<bits/stdc++.h>
using namespace std;
long long t,a,b,c;
int main(){
    cin >> t;
    // 18480907 848208365 3334529
    // 19902078 output salah
    // 1421171 output yang benar
    while(t--){
        cin >> a >> b >> c;
        if( (b+c-1) % a ==0){
            cout << a << endl;
        } else {
            cout << (b+c-1) % a <<endl;
        }
    }
}
