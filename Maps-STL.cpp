#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> names;
    int n,x,m;
    string s;
    cin >> n;
    while(n--){
        cin >> m >> s;
        if(m==1) {
            cin >> x;
            names[s] += x;
        }
        else if(m==2) names.erase(s);
        else {
            if(names.find(s) != names.end()) cout << names[s] <<endl;
            else cout << 0 <<endl;
        }
    }
}
