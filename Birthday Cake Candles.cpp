#include<bits/stdc++.h>
using namespace std;

int t,sum,big,n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        if(n>big){
            sum = 1;
            big = n;
        } else if(n==big){
            sum++;
        }
    }
    cout << sum <<endl;
}
