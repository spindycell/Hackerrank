#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct lis {
    ll id[5];
};

int main(){
    ll n,m,ans=0;
    cin >> n;
    ll pos=0,temp=LONG_LONG_MAX;
    vector<lis> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].id[1];
        if(arr[i].id[1] < temp)pos+=1;
        arr[i].id[0]=pos;
        temp=arr[i].id[1];
    }
    ll last=n-1;
    cin >> m;
    for(int i=0; i<m; i++){
        ll x;
        cin >> x;
        for(int j=last; j>=0; j--){
            if(x<arr[j].id[1]){
                cout << arr[j].id[0]+1 << endl;
                last = j;
                break;
            } else if(x==arr[j].id[1]){
                cout << arr[j].id[0] << endl;
                last=j;
                break;
            } else if (x>=arr[j].id[1] && arr[j].id[0]==1){
                cout << arr[j].id[0] << endl;
                last=j;
                break;
            }
            //cout << j << ' ';
        }
    }
}

