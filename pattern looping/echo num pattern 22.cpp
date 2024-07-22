#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            int mini1 = min(i,j);
            int mini2 = min(2*n-2-j,2*n-2-i);
            int mini = min(mini1, mini2);
            cout << (n - mini);
        }
        cout << endl;
    }
    return 0;
}

// input ==> 3
// output==>
// 33333
// 32223
// 32123
// 32223
// 33333
