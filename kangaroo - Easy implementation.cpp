#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,n,m,temp,temp1,temp2;
int main(){
    cin >> a >> n >> b >> m;
    temp1 = a + n;
    temp2 = b + m;
    temp = max(n,m);
    for(int i=temp; temp<=100000; temp+=10){
        if(temp1==temp2){
            cout << "YES";
            return 0;
        }
        temp1 += n;
        temp2 += m;
    }
    cout << "NO";
    return 0;
}
