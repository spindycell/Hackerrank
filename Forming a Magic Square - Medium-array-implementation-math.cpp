// https://www.hackerrank.com/contests/rookierank/challenges/magic-square-forming
#include<bits/stdc++.h>
using namespace std;


//list kemungkinan magicSquare untuk matrik 3 x 3
int magicSquare[8][3][3] = {
    {{8,1,6},{3,5,7},{4,9,2}},
    {{4,3,8},{9,5,1},{2,7,6}},
    {{2,9,4},{7,5,3},{6,1,8}},
    {{6,7,2},{1,5,9},{8,3,4}},
    {{6,1,8},{7,5,3},{2,9,4}},
    {{8,3,4},{1,5,9},{6,7,2}},
    {{4,9,2},{3,5,7},{8,1,6}},
    {{2,7,6},{9,5,1},{4,3,8}}
};

int arr[3][3],x;

int main() {

	for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
	}
	int ans = 100;
	for(int i =0; i<8; i++){
		int now = 0;
		for(int j = 0; j<3; j++){
			for(int k = 0; k<3; k++){
				now+=abs(magicSquare[i][j][k]-arr[j][k]);
			}
		}
		// melihat perbandingan tiap square cout << ans << " " ;
		// menyimpan index square yang digunakan x = i;
		ans = min(ans, now);
	}

    /*
	cout << endl;
	for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << magicSquare[x][i][j] << " ";
        }
        cout << endl;
	}
	*/
	cout<<ans<<endl;
}
