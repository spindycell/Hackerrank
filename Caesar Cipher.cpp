#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    string s;

    cin >> n;
    cin >> s;
    cin >> x;
    while(x>26){
        x-=26;
    }
    for(int i=0; i<n; i++){
        int temp=0;
        if(isalpha(s[i])){
            temp = (int)s[i];
            temp += x;
            if(!isalpha((char)temp)) temp-=26;

            s[i] = (char)temp;
        }
    }
    cout << s <<endl;
}
