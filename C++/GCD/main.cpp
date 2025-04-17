#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a = 12;
    int b = 8;
    int result = gcd(a, b);
    cout<<"The gcd of "<<a<<" and "<<b<<" is "<<result<<endl;
    return 0;
}
