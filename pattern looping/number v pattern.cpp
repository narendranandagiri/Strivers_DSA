#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) if(j<=i) cout << j+1; else cout << " ";
        for(int j = n; j > 0; j--) if(j-1<=i) cout << j; else cout << " ";
        cout << endl;
    }
    return 0;
}