#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n,x,kiri,kanan,total;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        bool flag=false;
        total = 0;
        kiri = 0,kanan=0;
        vector<ll> arr;
        set<ll> temp;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            arr.push_back(x);
            temp.insert(x);
            total+=x;
        }
        for(int i=0; i<n; i++){
            kiri+=arr[i];
            kanan = total-kiri-arr[i+1];
            if(kiri==kanan || arr.size()==1){
                flag=true;
                break;
            }
        }
        if( (temp.size()==2&&arr.size()>2) || flag==true) cout << "YES" <<endl;
        else if(flag==false)cout << "NO" <<endl;
    }
}
