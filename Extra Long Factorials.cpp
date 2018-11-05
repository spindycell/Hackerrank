#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> arr;
    arr.push_back(1); //mengisi vector dengan 1
    for (int i = 2; i <= n; ++i) { //dimulai dari 2 hingga n
        for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it){
            *it *= i; //bagaimana pointer bisa mengubah value dari vector
        }
        //for(int it=0; it<arr.size(); it++){
        //    cout << arr[it] << " ";
        //}
        //cout << endl;
        for (size_t j = 0; j < arr.size(); ++j) {
            if (arr[j] < 10){
                continue;
            }

            if (j == arr.size() - 1){ //ketika perulangan j berakhir
                arr.push_back(0);     //tambahkan size dengan mengpushback arr
            }
            arr[j + 1] += arr[j] / 10; // arr ke j+1 disi dengan 24/10 = 2
            arr[j] %= 10;              // arr ke j diisi dengan 24%10 = 4
        }
    }
    reverse(arr.begin(),arr.end());
    for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); ++it){
        cout << *it;
    }
}
