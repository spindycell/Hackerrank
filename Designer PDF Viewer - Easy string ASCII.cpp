#include<bits/stdc++.h>
using namespace std;
int value[30],maks;
string kata;

int listHuruf(char n){
    switch(n){
        case 'a': return 0;
        case 'b': return 1;
        case 'c': return 2;
        case 'd': return 3;
        case 'e': return 4;
        case 'f': return 5;
        case 'g': return 6;
        case 'h': return 7;
        case 'i': return 8;
        case 'j': return 9;
        case 'k': return 10;
        case 'l': return 11;
        case 'm': return 12;
        case 'n': return 13;
        case 'o': return 14;
        case 'p': return 15;
        case 'q': return 16;
        case 'r': return 17;
        case 's': return 18;
        case 't': return 19;
        case 'u': return 20;
        case 'v': return 21;
        case 'w': return 22;
        case 'x': return 23;
        case 'y': return 24;
        case 'z': return 25;
    }
    return 0;
}
int main(){
    for(int i=0; i<26; i++){
        cin >> value[i];
    }
    cin >> kata;
    for(int i=0; i<kata.length(); i++){
        char c = kata[i];
        int num = listHuruf(c);
        maks = max(maks,value[num]);
    }
    cout << maks*kata.length() << endl;
}
/* tanpa list huruf
using namespace std;

int tinggi[26] = {0};

int main() {
    for (int i = 0; i < 26; i++) {
        cin >> tinggi[i];
    }
    string kata;
    cin >> kata;
    int tinggiMaks = 0;
    //cout << int('a') << " " << int('z') << "\n";
    for (int i = 0; i < kata.length(); i++) {
        tinggiMaks = max(tinggiMaks, tinggi[int(kata[i]) - 97]);
    }
    cout << kata.length() * tinggiMaks << "\n";
    return 0;
}
*/

/* list menggunakan string
string alpha = "abcdefghijklmnopqrstuvwxyz";
int main(){

    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int max=0;
    for(int i=0;i<word.length();i++){
        //cout<<h[alpha.find(word[i],0)]<<',';
        if(h[alpha.find(word[i],0)]>max)
            max= h[alpha.find(word[i],0)];
        //cout<<max<<endl;
    }
    cout<<max*word.length();
    return 0;
}
*/
