#include<bits/stdc++.h>
using namespace std;

int s,t,a,b,m,n,ap,jer,temp;
int main(){
    vector <int> apel,jeruk;
    cin >> s >> t >> a >> b >> m >> n;
    while(m--){
        cin >> temp;
        if(temp+a>=s && temp+a<=t){
            ap++;
        }
    }
    while(n--){
        cin >> temp;
        if(temp+b>=s && temp+b<=t){
            jer++;
        }
    }
    cout << ap << endl << jer <<endl;
}
