#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int space = n-1;
    int star = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++) cout << " ";
        for(int j = 0; j < star; j++) cout << "*";
        for(int j = 0; j < space; j++) cout << " ";
        cout << endl;
        space-=1;
        star+=1;
    }
    space = 0;
    star = n;
    for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++) cout << " ";
    for(int j = 0; j < star; j++) cout << "*";
    for(int j = 0; j < space; j++) cout << " ";
    cout << endl;
    space+=1;
    star-=1;
    }
    return 0;
}