#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,ans;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x%7 < 2) cout << "Second" << '\n';
        else cout << "First" << '\n';
    }
}
