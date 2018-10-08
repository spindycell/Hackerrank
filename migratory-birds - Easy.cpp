#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n, arr[100001] = {0}, tmp, maks=100000, terbanyak=0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> tmp;
        arr[tmp]++;
        if (arr[tmp]>terbanyak){
            maks = tmp;
            terbanyak = arr[tmp];
        } else if(arr[tmp]==terbanyak){
            if(tmp<maks){
                maks = tmp;
            }
        }
    }

    cout << maks << endl;

    return 0;
}
