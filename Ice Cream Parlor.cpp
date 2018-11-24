#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> t;
    while(t--){
        int x,idx,idy,tempA,tempB;
        vector<pair<int,int> > arr;
        cin >> n >> m;
        for(int i=1; i<=m; i++){
            cin >> x;
            if(x<n){
                arr.push_back(make_pair(x,i));
            }
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        /*
        for(int i=0; i<arr.size(); i++){
            cout << arr[i].first << " " << arr[i].second <<endl;
        }
        */
        for(int i=0; i<arr.size();){
            for(int j=arr.size()-1; j>=0;){
                ans = arr[i].first + arr[j].first;
                if(ans==n){
                    if(arr[i].second > arr[j].second)cout << arr[j].second << " " << arr[i].second <<endl;
                    else cout << arr[i].second << " " << arr[j].second <<endl;
                    i=arr.size();
                    j=-1;
                }
                else if(ans>n)j--;
                else if(ans<n)i++;
            }
        }
    }
}
