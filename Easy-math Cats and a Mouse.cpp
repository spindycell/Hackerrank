#include<bits/stdc++.h>
using namespace std;
int n,x,y,z;

string mouse(int x,int y,int z){
    if(abs(z-x) < abs(z-y)){
        return "Cat A";
    } else if(abs(z-x) > abs(z-y)){
        return "Cat B";
    } else {
        return "Mouse C";
    }
}
int main(){
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        cout << mouse(x,y,z);
        cout << endl;
    }
}
