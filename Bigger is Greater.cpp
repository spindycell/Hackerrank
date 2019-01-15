#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s,temp,biggest;
        cin >> s;
        biggest = s;
        temp=s;
        sort(biggest.begin(),biggest.end(),greater<int>());
        next_permutation(s.begin(),s.end());
        if(s==temp || temp==biggest) cout << "no answer" << endl;
        else cout << s << endl;
    }
}
