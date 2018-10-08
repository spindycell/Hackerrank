#include<bits/stdc++.h>
using namespace std;
int n,k,c[105],heal=100;
int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> c[i];
    }
    for(int i=0; i<n; i+=k){
        heal--;
        if(c[i]==1){
            heal -= 2;
        }
    }
    cout << heal <<endl;
}
