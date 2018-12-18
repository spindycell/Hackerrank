#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t,x,k;
    cin >> n;
    while(n--){
        vector<int> a,b;
        cin >> m >> k;
        for(int i=0; i<m; i++){
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<m; i++){
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),std::greater<int>());
        bool ans=true;
        for(int i=0; i<m; i++){
            //cout << a[i]+b[i] << ' ';
            if(a[i]+b[i]<k){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}
