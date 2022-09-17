#include <iostream>

using namespace std;

void three_n_p_one(int n);

int main()
{
    int n;
    cin >> n;
    three_n_p_one(n);
    return 0;
}

void three_n_p_one(int n){
    cout << n << " ";
    if (n == 1){return;}
    else if (n % 2 == 0){three_n_p_one(n/2);}
    else{three_n_p_one((3*n) + 1);}
}