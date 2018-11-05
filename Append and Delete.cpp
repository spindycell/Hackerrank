#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    int k,ans,mins,p1,p2,n=0;
    cin >> s1 >> s2;
    cin >> k;
    p1 = s1.length();
    p2 = s2.length();
    mins = min(s1.length(),s2.length());
    for(int i=0; i<mins; i++){
        if(s1[i]==s2[i])n++;
        else break;
    }
    ans = (p1-n)+(p2-n);
    //cout << ans <<endl;
    if(p1<p2){
        ans = p1+p2;
        if(ans<=k)cout << "YES" <<endl;
        else cout << "No" <<endl;
    } else {
        if(ans<=k)cout << "Yes" <<endl;
        else cout << "No" <<endl;
    }
}
