//link soal : https://www.hackerrank.com/challenges/coin-change/problem
// nilai masih 80 belum 100
//Dynamic Programming
#include <bits/stdc++.h>

using namespace std;

int x[1000000][100];
int dp(int *a,int m,int n){
    if(n<0)return 0;
    if(n==0)return 1;
    if(m<0 && n>=1)return 0;
    if(x[n][m]>0)return x[n][m];
    int r1=dp(a,m-1,n);
    int r2=dp(a,m,n-a[m]);
    int r=r1+r2;
    x[n][m]=r;

    return r;
}

int main(){
    int n,m;
    cin >> n >> m;
    int *a=new int[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    cout << dp(a,m-1,n);

    return 0;
}
