#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, m;
    cin >> N >> m;
    int arr[m];
    for (int i = 0; i < m; ++i){cin >> arr[i];}
    sort(arr, arr + m);
    int sum = 0;
    for (int i = 0; i < m; ++i){
        sum += arr[i];
        if (sum > N){cout << i; return 0;}
        // cout << "ITR: " << i << " " << arr[i] << " " << sum << endl;
    }
    cout << m;
    return 0;
}
