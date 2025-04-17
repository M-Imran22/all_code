#include <iostream>

using namespace std;

//Using Recursive Function

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
 {
     int a;
     cout <<"Enter a number \n";
     cin >>a;
  cout << fibonacci(a) << std::endl;  // Outputs 55
  return 0;
}

