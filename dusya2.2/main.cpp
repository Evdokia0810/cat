#include <iostream>

using namespace std;

    double binpow (float a, int n) {
    if (n==0)
        return 1;
        if (n%2==1)
            return binpow (a,n-1)*a;
        if (n<0)
            return binpow( 1/a, -1*n)*a*a;
        else {
            return binpow (a,n/2)*a*a;
        }
    }
int main() { }

