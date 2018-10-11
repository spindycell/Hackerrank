#include <cstdio>
#include <algorithm>
#include <set>

using namespace std;

const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
// down, right, up, left

int n, k;
set<pair<int, int> > wow;

int search(int x, int y, int a, int b){
	x+=a; y+=b;

	pair<int, int> tmp;
	int ret = 0;
	while(x >= 1 && x <= n && y >= 1 && y <= n){
		tmp = *(wow.lower_bound(make_pair(x, y)));
		if(tmp.first == x && tmp.second == y) return ret;
        ret++;
		x+=a; y+=b;
	}
	return ret;
}

int main(){
	scanf("%d%d", &n, &k);

	int x, y;
	scanf("%d%d", &x, &y);

	int a, b;
	for (int i = 0; i < k; i++){
		scanf("%d%d", &a, &b);
		wow.insert(make_pair(a, b));
	}

	int ans = 0;
	for (int i = 0; i < 8; i++){
		ans+=search(x, y, dx[i], dy[i]);
	}
	printf("%d\n", ans);
}
