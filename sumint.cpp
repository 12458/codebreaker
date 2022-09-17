#include <iostream>

using namespace std;

int main()
{
    int itr;
    int sum = 0;
    cin >> itr;
    for (int i = 0; i < itr; ++i){
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << sum;
    return 0;
}