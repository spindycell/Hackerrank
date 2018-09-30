#include<bits/stdc++.h>
using namespace std;

int year;

int main(){
    cin >> year;
    if(year>1918){
        if(year%400==0){
            cout << "12.09." << year <<endl;
        } else if(year%4==0 && year%100!=0){
            cout << "12.09." << year <<endl;
        } else {
            cout << "13.09." << year <<endl;
        }
    } else if(year==1918){
        cout << "26.09.1918";
    } else {
        if(year%4==0){
            cout << "12.09." << year <<endl;
        } else {
            cout << "13.09." << year <<endl;
        }
    }
}
