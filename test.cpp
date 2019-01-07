#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,F,S;
    cin >> a >> b >> c >> d >> e;
    F= (a*b) + (a*d)/2;
    S= (a*c) + (a*e)/2;
    cout << F << ' ' << S << endl;
    if(F<S)cout << "First\n";
    else if(F>S)cout << "Second\n";
    else cout << "Friendship\n";
}
