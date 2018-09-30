#include<bits/stdc++.h>
using namespace std;
int n,a,mins,maxs,dikit,banyak;
int main(){
    cin >> n >> a;
    dikit = a;
    banyak = a;
    while(--n){
        cin >> a;
        if(a<dikit){
            mins++;
            dikit = a;
        }
        if(a>banyak){
            maxs++;
            banyak = a;
        }
    }
    cout << maxs << " " << mins << endl;
}
