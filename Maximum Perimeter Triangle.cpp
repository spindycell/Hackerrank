#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,x,jum=0,a,b,c;
    vector<ll> arr,temp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i=2; i<n; i++){
        temp.insert(temp.end(), arr.begin()+i-2, arr.begin()+i+1);
        sort(temp.begin(),temp.end());
        if(temp[0]+temp[1]>temp[2]){
            if(temp[0]+temp[1]+temp[2]>jum){
                jum = temp[0]+temp[1]+temp[2];
                a= temp[0],b=temp[1],c=temp[2];
            }
        }
        temp.clear();
    }
    if(jum>0) cout << a << ' ' << b << ' ' << c << '\n';
    else cout << -1 <<'\n';
}
