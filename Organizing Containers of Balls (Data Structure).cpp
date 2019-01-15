#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> bawah(n+1,0),samping(n+1,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x;
                cin >> x;
                samping[i]+=x;
                bawah[j]+=x;
            }
        }
        bool bisa=true;
        sort(bawah.begin(),bawah.end());
        sort(samping.begin(),samping.end());
        for(int i=0; i<n; i++){
            if(bawah[i]!=samping[i]){
                bisa=false;
                break;
            }
        }
        if(bisa) cout << "Possible"<<endl;
        else cout << "Impossible"<<endl;
    }
}
