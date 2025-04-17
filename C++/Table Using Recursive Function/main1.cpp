#include <iostream>

using namespace std;


void print_table(int n)
{
  if (n > 10)
  {
    return;
  }

  std::cout << n << " ";
  print_table(n + 1);
}

int main()
 {
  print_table(1);
  return 0;
 }
