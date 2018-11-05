#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll p,q,ans,mid,hit,x,y;
string kiri,kanan;
int main(){
    cin >> p >> q;
    vector<ll> arr;
    for(ll i=p; i<=q; i++){
        hit = i*i;
        stringstream ss;
        ss << hit;
        string s = ss.str();
        mid = s.length()/2;
        //cout << s <<endl;
        if(s.length()%2==0){
            kiri = s.substr(0,mid);
            kanan = s.substr(mid,mid);
        } else {
            kiri = s.substr(0,mid);
            kanan = s.substr(mid,mid+1);
        }
        //cout << kiri << " " << kanan <<endl;
        stringstream toKiri(kiri);
        toKiri >> x;
        stringstream toKanan(kanan);
        toKanan >> y;
        if(x+y==i)arr.push_back(i);
    }
    if(arr.empty())cout << "INVALID RANGE" <<endl;
    else{
        for(ll i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
    }
}
