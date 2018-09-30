#include<bits/stdc++.h>
using namespace std;
int n,d,m,hasil;
int main(){
    cin >> n;
    int s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    cin >> d >> m;
    for(int i=0; i<n; i++){
        int jum = 0;
        for(int j=i; j<m+i; j++){
            jum += s[j];
        }
        if(jum == d){
            hasil++;
        }
    }
    cout << hasil <<endl;
}
