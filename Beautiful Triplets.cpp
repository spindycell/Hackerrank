#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans;
vector<int> arr;
bool ada;
int main(){
    cin >> n >> m;
    if(n==1){
        cout << 0;
        return 0;
    }
    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size()-2; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]-arr[i]==m){
                for(int k=j+1; k<arr.size(); k++){
                    if(arr[k]-arr[j]==m) ans++;
                }
            }
        }
    }
    cout << ans <<endl;
}
