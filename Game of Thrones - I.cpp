#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> arr;
    for(int i=0; i<s.length(); i++){
        arr[s[i]]++;
    }
    int odd=0;
    for(std::map<char,int>::iterator it=arr.begin(); it!=arr.end(); ++it){
       if(it->second%2!=0)odd++;
       if(odd>1){
        cout << "NO" <<endl;
        return 0;
       }
    }
    cout << "YES" <<endl;
    return 0;
}
