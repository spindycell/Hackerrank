#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x,y,ans=0,impt=0;
    cin >> n >> k;
    vector<pair<int,int> > arr;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        ans+=x;
        if(y==1)impt++;
        arr.push_back(make_pair(x,y));
    }
    if(impt<=k){
        cout << ans <<endl;
        return 0;
    }

    sort(arr.begin(),arr.end(),cmp);
    for(int i=0; i<impt-k; i++){
        ans = ans - arr[i].first*2;
    }
    cout << ans <<endl;
}
