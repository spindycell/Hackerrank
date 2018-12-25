#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,ans=0;
        cin >> x >> y;
        x%=4,y%=4;
        if( (x==0) || (y==3) || (y==0) || (x==3) ) cout << "First\n";
        else cout << "Second\n";
    }
}
