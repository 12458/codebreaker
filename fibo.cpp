#include <iostream>

using namespace std;

// Dynamic Programming solution

int main(){
    int n;
    cin >> n;
    if (n < 0) return 1;
    if (n == 0){cout << "0"; return 0;}
    if (n == 1){cout << "0\n1"; return 0;}
    if (n == 2){cout << "0\n1\n1"; return 0;}
    unsigned long long fibo[n+1];
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i <= n; ++i){
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 998244353;
    }
    for (int i = 0; i <= n; ++i){
        cout << fibo[i] << endl;
    }
    return 0;
}