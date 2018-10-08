#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[55];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp;
        cin >> tmp;
        arr[tmp] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[arr[i]] << "\n";
    }
    return 0;
}
/* cara nub
#include<bits/stdc++.h>
using namespace std;
int n,arr[101],ans[101],curr[101];
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[j]==i){
                ans[i] = j;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[j]==ans[i]){
                curr[i] = j;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << curr[i] <<endl;
    }
}
*/
