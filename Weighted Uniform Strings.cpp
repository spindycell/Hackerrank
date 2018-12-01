#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x){
    while (l <= r){
        int m = l + (r-l)/2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
string s;
int n,x,in,jum;
vector<int> arr;

int main(){
    cin >> s >> n;
    in = (int)s[0]-96;
    arr.push_back(in);
    jum=in;

    for(int i=1; i<s.length(); i++){
        in = (int)s[i]-96;
        if(s[i]==s[i-1]){
            jum += in;
            in = (int)s[i-1]-96;
            if(!binary_search(arr.begin(),arr.end(),in+jum)){
                arr.push_back(in+jum);
            }
        } else{
            jum = 0;
            if(!binary_search(arr.begin(),arr.end(),in)){
                arr.push_back(in);
            }
        }
    }

    sort(arr.begin(),arr.end());

    for(int i=0; i<n; i++){
        cin >> x;
        if(binarySearch(arr,0,arr.size(),x)>=0){
            cout << "Yes" <<endl;
        }else {
            cout << "No" <<endl;
        }
    }
}
