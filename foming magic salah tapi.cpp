#include<bits/stdc++.h>
using namespace std;
int arr[10][10],jum[10],ans;

int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);

    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }

    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }

    return res;
}

int main(){
    for(int i=0; i<3; i++){
        int jumlah = 0;
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
            jumlah += arr[i][j];
            if(j==2){
                jum[i] = jumlah;
            }
        }
    }
    for(int i=0; i<3; i++){
        int jumlah = 0;
        for(int j=0; j<3; j++){
            jumlah += arr[j][i];
            if(j==2){
                jum[i+3] = jumlah;
            }
        }
    }
    jum[6] = arr[0][0] + arr[1][1] + arr[2][2];
    jum[7] = arr[0][2] + arr[1][1] + arr[2][0];
    for(int i=0; i<8; i++){
        cout << jum[i] << " ";
    }
    cout << endl << mostFrequent(jum,8) << endl;
    int mostNumber = mostFrequent(jum,8);
    for(int i=0; i<8; i++){
        if(mostNumber == jum[i]){
            continue;
        } else {
            ans += abs(mostNumber-jum[i]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << ans << endl;
}
