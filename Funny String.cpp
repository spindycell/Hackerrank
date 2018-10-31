#include<bits/stdc++.h>
using namespace std;
int n,arr1[1005],arr2[1005];
string s;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        bool funny = true;
        int pos=s.length()-1;
        for(int j=0; j<pos; j++){
            arr1[j] = abs(int(s[j])-int(s[j+1]));
            arr2[j] = arr1[j];
        }
        for(int j=0; j<s.length()/2; j++){
            if(arr1[j]!=arr2[pos-1]) funny = false;
            pos--;
        }
        if(funny) cout << "Funny\n";
        else cout << "Not Funny\n";
    }
}
