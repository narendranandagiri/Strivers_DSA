#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int star = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-star; j++) cout << "*";
        for(int j = 0; j < 2*star; j++) cout << " ";
        for(int j = 0; j < n-star; j++) cout << "*";
        star+=1;
        cout << endl;
    }
    star = n-1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-star; j++) cout << "*";
        for(int j = 0; j < 2*star; j++) cout << " ";
        for(int j = 0; j < n-star; j++) cout << "*";
        star-=1;
        cout << endl;
    }
    return 0;
}
// 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********