#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string x,l="hackerrank";
    cin >> n;
    while(n--){
        cin>>x;
        int j=0;
        for(int i=0;i<x.size();i++){
            if(x[i]==l[j])j++;
        }

        if(j>=10){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout << endl;
    }
}
