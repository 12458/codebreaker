#include <iostream>

using namespace std;

// The Euclidean Algorithm for finding GCD(A,B) is as follows:
// If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
// If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
// Write A in quotient remainder form (A = B⋅Q + R)
// Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)

int gcd(int a, int b){
    if (a < b) {int tmp = a; a = b; b = tmp;}
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}