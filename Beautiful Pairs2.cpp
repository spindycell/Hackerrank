#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    set<int> A,B,C;
    for(int i=0; i<n; i++){
        cin >> x;
        A.insert(x);
        C.insert(x);
    }
    for(int i=0; i<n; i++){
        cin >> x;
        C.insert(x);
    }
    int sizeA,sizeB;
    sizeA = A.size();
    sizeB = B.size();
    cout << C.size()- max(A.size(),B.size()) + 1 << endl;
}

