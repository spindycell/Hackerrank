#include<bits/stdc++.h>
using namespace std;

class Student{
    int nilai;
    int jumlah;

public:
    Student(){
        nilai = 0;
        jumlah = 0;
    }
    void set_nilai(int newNilai){
        nilai = newNilai;
    }
    void set_jumlah(int newJumlah){
        jumlah = newJumlah;
    }
    int get_nilai(){return nilai;}
    int get_jumlah(){return jumlah;}

};

int main(){
    int n,nilai,jumlah=0,ans=0;

    Student st;
    cin >> n;
    for(int i=0; i<n; i++){
        jumlah = 0;
        for(int j=0; j<5; j++){
            cin >> nilai;
            jumlah += nilai;
            if(i==0) {
                st.set_nilai(jumlah);
            } else {
                st.set_jumlah(jumlah);
            }
        }
        if(st.get_nilai() < st.get_jumlah() ){
            ans++;
        }
    }
    cout << ans <<endl;
}
