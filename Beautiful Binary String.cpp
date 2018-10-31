#include<bits/stdc++.h>
using namespace std;
int n,ans;
string arr;
int main(){
    cin >> n;
    cin >> arr;
    for(int i=0; i<n; i++){
        if(i>1){
            if(arr[i]=='0' && arr[i-1]=='1' && arr[i-2]=='0'){
                arr[i]='1';
                ans++;
            }
        }
    }
    cout << ans <<endl;
}
