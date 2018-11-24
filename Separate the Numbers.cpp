#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string num;
    cin >> n;
    for(int i=0; i<n; i++){
        bool ok =true;
        int ans=0,strange=0;
        cin >> num;
        ll p=num.length();
        if(num[0]=='0') cout << "NO" <<endl;
        else if(p==1) cout << "NO" <<endl;
        else {
            ll idx1=0,idx2=1,pos=1,inc=1,batas=p,temp=0;
            while(inc<batas){
                //cout << idx1 << " " << idx2 << " " << pos <<endl;
                string tempL=num.substr(idx1,pos),tempR=num.substr(idx2+temp,pos);
                string tempM =num.substr(idx2+temp,pos+1);
                ll kanan,kiri,mid;
                stringstream conL(tempL);
                conL >> kiri;
                stringstream conR(tempR);
                conR >> kanan;
                stringstream con(tempM);
                con >> mid;
                //cout << mid <<endl;
                //cout << kanan << " " <<kiri << endl;
                if(kanan-kiri==1){
                    idx1+=pos,idx2+=pos;
                    ok = true;
                } else if(mid-kiri==1){
                    idx1+=pos,idx2+=pos+1,++pos;
                    strange=1;
                    ok = true;
                } else {
                    inc=1,idx1=0,idx2=1,++temp,++pos;
                    ok = false;
                }
                inc+=pos;
                //cout << pos <<endl;
            }
            if(ok) cout << "YES " << num.substr(0,pos-strange) << endl;
            else cout << "NO" <<endl;
        }
    }
}
