#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int chrt = 65+n-i-1;
        for(int j = 0; j <= i; j++){
            cout << (char)chrt << " ";
            chrt+=1;
        }
        for(int j = i+1; j < n; j++) cout << "  ";
        cout << endl;
    }
    return 0;
}