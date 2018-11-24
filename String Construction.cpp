#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        set<char> arr;
        string s;
        cin >> s;
        for(int j=0; j<s.length(); j++){
            arr.insert(s[j]);
        }
        cout << arr.size() <<endl;
    }

}
