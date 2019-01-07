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
    if(p1+p2-2*n > k) cout << "No" << '\n';
    else if((p1+p2-2*n)%2==k%2) cout << "Yes" << '\n';
    else if(p1+p2-k < 0) cout << "Yes" << '\n';
    else cout << "No" << '\n';
}
