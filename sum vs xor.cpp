#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,i,ans=0;
    cin >> n;
    for(i=n; i>0; i/=2){
        if(i%2==0)ans++;
    }
    cout << (long long)pow(2,ans) << endl;
}
//32768
