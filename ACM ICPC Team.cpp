#include<bits/stdc++.h>
using namespace std;
int n,m,ans,maks;
int main(){
    cin >> n >> m;
    string x;
    int arr[n][m];
    for(int i=0; i<n; i++){
        cin >> x;
        for(int j=0; j<m; j++){
            if(x[j]=='1') arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = 0;
            for(int k=0; k<m; k++){
                if(arr[i][k]+arr[j][k]>0) temp++;
            }
            maks = max(maks,temp);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = 0;
            for(int k=0; k<m; k++){
                if(arr[i][k]+arr[j][k]>0) temp++;
            }
            if(temp==maks) ans++;
        }
    }
    cout << maks <<endl;
    cout << ans <<endl;
}
