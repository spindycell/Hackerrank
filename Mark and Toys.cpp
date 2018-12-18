#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,ans=0;
    vector<int> arr;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int j=0;
    while(m-arr[j]>0){
        ans++;
        m-=arr[j];
        j++;
    }
    cout << ans <<endl;
}
