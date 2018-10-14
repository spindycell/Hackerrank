#include<bits/stdc++.h>
using namespace std;

char c;
set<char> s;

int main(){
    while(cin >> c){
        if(isupper(c)) c = tolower(c);
        s.insert(c);
    }
    if(s.size()==26){
        cout << "pangram";
    } else {
        cout << "not pangram";
    }
}
