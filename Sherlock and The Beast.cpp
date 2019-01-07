//https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int dif = n;
        while(dif%3!=0){
            dif-=5;
        }
        if(dif<0)cout << "-1";
        else {
            for(int i=0; i<dif;i++)cout << '5';
            for(int i=0; i<n-dif; i++) cout << '3';
        }
        cout << endl;
    }
}
