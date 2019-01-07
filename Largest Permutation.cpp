// https://www.geeksforgeeks.org/largest-permutation-k-swaps/
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define debug(x) cout << #x << " : " << x << '\n'
using namespace std;

void KswapPermutation(int arr[], int n, int k) {
  int pos[n + 1];

  for (int i = 0; i < n; ++i)
    pos[arr[i]] = i;

  for (int i = 0; i < n && k; ++i) {
    if (arr[i] == n - i)
      continue;

    int temp = pos[n - i];

    pos[arr[i]] = pos[n - i];
    pos[n - i] = i;

    swap(arr[temp], arr[i]);
    --k;
  }
}

int main() {
  fastio int n, m;
  cin >> n >> m;
  int arr[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  KswapPermutation(arr, n, m);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
