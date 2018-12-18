#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
    if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin()))
        return true;
    else return false;
}

int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(isPalindrom(s))cout << -1 <<endl;
        else {
            int k=s.length()-1;
            for(int j=0; j<s.length()/2; j++){
                if(s[j]!=s[k]){
                    s.erase(j,1);
                    if(isPalindrom(s)){
                        cout << j << endl;
                        break;
                    } else{
                        cout << k <<endl;
                        break;
                    }
                }
                k--;
            }
        }
    }
}
//hgygsvlfwcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcflvsgygh 8
//hgygsvlfcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcwflvsgygh 44
