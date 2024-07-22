#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int space = n-1;
    int star = 1;
    int starP = 0;
    for(int i = 0; i < n; i++){
        if(i%2) starP = 0; else starP = 1;
        for(int j = 0; j < n-1; j++) cout << " ";
        for(int j = 0; j < star; j++){ cout << starP; starP = starP ? 0 : 1;}
        for(int j = 0; j < space; j++) cout << " ";
        cout << endl;
        space-=1;
        star+=1;
    }
    return 0;
}



    // 1    
    // 01   
    // 101  
    // 0101 
    // 10101
