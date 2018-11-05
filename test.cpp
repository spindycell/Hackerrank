#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char,int> arr;
    for(int i=0; i<s.length(); i++){
        arr[s[i]]++;
    }
    int n;
    cin >> n;
    int k=1;
    for(int i=0; i<n; i++){
        string c;
        map<char,int> arr2;
        int mins=10000,ans=0,x=0;
        cin >> c;
        for(int j=0; j<c.length(); j++){
            arr2[c[j]]++;
        }
        for(int j=0; j<c.length(); j++){
            if(arr[c[j]]>=arr2[c[j]]){
                x = arr[c[j]]/arr2[c[j]];
                mins = min(x,mins);
            }
            if(arr[c[j]]==0){
                mins = 0;
                break;
            }
        }
        if(mins==1000 || mins==0)cout << "Case #"<<k<<": "<<-1 <<endl;
        else cout << "Case #"<<k<<": "<<mins<<endl;
        k++;
    }
}
//AABBaabcd
//10
//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 10
