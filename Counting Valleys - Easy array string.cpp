#include<bits/stdc++.h>
using namespace std;
int n,pos,ans;
string hikes;
int main(){
    cin >> n;
    cin >> hikes;
    for(int i=0; i<n; i++){
        if(hikes[i] == 'U') pos++;
        if(hikes[i] == 'D') pos--;
        cout << pos <<endl;
        if(pos == 0 & hikes[i]=='U'){
            ans++;
        }
    }
    cout << ans <<endl;
}
