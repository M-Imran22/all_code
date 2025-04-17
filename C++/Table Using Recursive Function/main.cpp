#include <iostream>

using namespace std;


void print_table(int n, int limit) {
  if (n < limit) {
    return;
  }

  std::cout << n << " x " << limit << " = " << n * limit << std::endl;
  print_table(n + 1, limit);
}

int main() {
  std::cout << "Enter a number: ";
  int n;
  std::cin >> n;

  print_table(n, 1);
  return 0;
}


