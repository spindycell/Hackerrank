#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int n = s.length();
    for(int i=0; i<n-1; ){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i = 0;
        } else {
            i++;
        }
    }
    if(s.length()==0){
        cout << "Empty String";
    } else {
        for(int i=0; i<s.length(); i++){
            cout << s[i];
        }
    }
}
