#include<bits/stdc++.h>
using namespace std;
typedef pair < int, int > ii;

int n,x;
vector<ii> arr;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(make_pair(x,i));
    }
    sort(arr.begin(),arr.end());
    int mins = 100005;
    for(int i=0; i<n; i++){
        if(arr[i].first == arr[i+1].first){
            mins = min(mins,arr[i+1].second-arr[i].second);
        }
    }
    if(mins==100005) cout << -1 <<endl;
    else cout << mins <<endl;
}
