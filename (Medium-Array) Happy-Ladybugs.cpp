#include<bits/stdc++.h>
using namespace std;
int g,n,hitung;
char c[100];

int main(){
    cin >> g;
    while(g--){
        cin >> n;
        bool satu=false,strip=false;

        for(int i=0; i<n; i++){
            cin >> c[i];
            if(c[i]=='_'){
                strip = true;
            }
        }
        if(!strip){
            for(int i=0; i<n; i++){
                if(c[i-1]!=c[i] && c[i+1]!=c[i]){
                    satu = true;
                }
            }
        } else {
            for(int i=0; i<n; i++){
                hitung = count(c, c+n, c[i]);
                if(hitung==1 && c[i] != '_'){
                    satu = true;
                }
            }
        }
        if(satu){
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << endl;
    }
}
