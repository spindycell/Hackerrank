#include<bits/stdc++.h>
#define M 32
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans=0,maks=0,temp=0;
    cin >> n >> m;
    for(int i=n; i<=m; i++){
        for(int j=i; j<=m; j++){
            temp=i^j;
            maks=max(temp,maks);
        }
    }
    cout << maks <<endl;
}
