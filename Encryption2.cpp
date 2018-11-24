#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.length();
    int akar = sqrt(n);

    int batas=0;
    if((akar*akar+1<n)){
        batas = akar+1;
        akar = batas;
    }
    else if(n%akar==0)batas= n/akar;
    else batas=n/akar+1;

    //cout << batas << " " << akar;
    for(int i=0; i<batas; i++){
        for(int j=i; j<n; j+=batas){
            cout << s[j];
        }
        cout << " ";
    }
}

