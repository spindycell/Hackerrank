#include<bits/stdc++.h>
using namespace std;

string s,x,full,damn;
int jam;

int main(){
    cin >> s;
    full = s.substr(2,6);
    x = s.substr(0,2);
    damn = s.substr(0,8);
    stringstream clock(x);
    clock >> jam;
    if(s[8]=='P'){
        if(s[0] == '1' && s[1] == '2'){
            cout << damn;
        } else {
            jam += 12;
            cout << jam << full;
        }

    } else {
        if(s[0] == '1' && s[1] == '2'){
                cout << "00";
            for(int i=2; i<s.length()-2; i++){
                cout << s[i];
            }
        } else {
            cout << damn;
        }

    }
    cout << endl;
}
