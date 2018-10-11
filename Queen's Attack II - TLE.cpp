#include<bits/stdc++.h>
using namespace std;
int n,k,r,c,ans,row,col;

int hitung(int n,int r,int c,int row,int col){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==r) {
                if(col < c){
                    if(row==i && j<=col) ans-- ;
                } else if(col > c){
                    if(row == i && j>=col) ans-- ;
                }
            } else if(j==c){
                if(row < r){
                    if(row>=i && j==col) ans--;
                } else if(row > r){
                    if(row <= i && j==col) ans--;
                }
            }
            else if(i==r-(c-j) && j==c-(c-j) ) {
                if(row<r){
                    if( (i<=row && j<=col) && (i==row-(col-j) && j==col-(col-j) )){
                        ans--;
                    }
                } else if(row>r){
                    if( (i>=row && j>=col) && (i==row-(col-j) && j==col-(col-j) ) ){
                        ans--;
                    }
                }
            } else if(i==r+(c-j) && j==c-(c-j)){
                if(row<r){
                    if( (i<=row && j>=col) && (i==row+(col-j) && j==col-(col-j) )){
                        ans--;
                    }
                } else if(row>r){
                    if( (i>=row && j<=col) && (i==row+(col-j) && j==col-(col-j) ) ){
                        ans-- ;
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    cin >> n >> k;
    cin >> r >> c;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==r && j==c){
              continue;
            } else if(i==r) {
                ans++;
            } else if(j==c){
                ans++;
            }
            else if(i==r-(c-j) && j==c-(c-j) ) {
                ans++;
            } else if(i==r+(c-j) && j==c-(c-j)){
                ans++;
            }
        }
    }
    for(int i=1; i<=k; i++){
        cin >> row >> col;
        hitung(n,r,c,row,col);
    }
    cout << ans << endl;
}
