#include<bits/stdc++.h>
using namespace std;
long long b,n,m,x,ans = -1;
vector<long long> key,usb;

int main(){
    cin >> b >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
            key.push_back(x);

    }
    for(int i=0; i<m; i++){
        cin >> x;
            usb.push_back(x);

    }
    sort(key.begin(),key.end(),greater<int>());
    sort(usb.begin(),usb.end());
    for(int i = 0, j = 0; i < n; i++){
        for(; j < m; j++){
            if(key[i]+usb[j] > b) break;
            if(key[i]+usb[j] > ans)
                ans = key[i]+usb[j];
        }
    }
    cout << ans << endl;
}

/*
5 5 3
4 1 2 5 7
1 2 3

5 1 1 // pada case ini akan runtime error jika tidak menggunakan if size
4
5
*/
