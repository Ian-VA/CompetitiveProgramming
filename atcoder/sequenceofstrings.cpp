#include <iostream>
#include <vector>
#include <string>

int main() {
  int n; std::cin >> n;
  std::string arr[n];

  for (int i = 0; i < n; i++) {std::cin >> arr[i];}

  int *ptr1 = arr[0];
  int *ptr2 = arr[n];
  while (*ptr2 != *ptr1)
  {
      
  }
  return 0;
}
