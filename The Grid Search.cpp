#include<bits/stdc++.h>
using namespace std;

int N,M,R,C;
vector<string> grid,cari;

bool adaGak(int x,int y){
    for(int i=0; i< (int)R; i++){
        for(int j=0; j< (int)C; j++){
            int ii = i+x, jj = j+y;
            if(ii >= N || jj>=M) return false;
            else if(grid[ii][jj] != cari[i][j]) return false;
            else continue;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N >> M;
        grid = vector<string> (N);
        for(int i=0; i< (int)N; i++){
            cin >> grid[i];
        }
        cin >> R >> C;
        cari = vector<string> (R);
        for(int i=0; i< (int)R; i++){
            cin >> cari[i];
        }

        bool ada=false;

        for(int i=0; i< (int)N; i++){
            for(int j=0; j< (int)M; j++){
                ada = adaGak(i,j);
                if(ada)break;
            }
            if(ada)break;
        }
        if(ada)cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
}
