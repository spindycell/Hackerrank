#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
vector<pair<int,int> > arr;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x >> y;
        m = x+y;
        arr.push_back(make_pair(m,i));
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        cout << arr[i].second << ' ';
    }
    cout << endl;
}
