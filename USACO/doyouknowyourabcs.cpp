#include <iostream>
#include <algorithm>
#include <vector>
// this was ez lol
int main() {
  std::vector<int> numbers; int a, b, c;

  for (int i = 0; i < 7; i++){
    int j; std::cin >> j;
    numbers.push_back(j);
  }
  int tempmax = 0;
  int tempmax1 = 0;
  std::sort(numbers.begin(), numbers.end());
  a = numbers[0]; b = numbers[1];

  for (auto &num : numbers) {
    tempmax = std::max(tempmax, num);
  }
  numbers.erase(std::remove(numbers.begin(), numbers.end(), tempmax), numbers.end());

  for (auto &num : numbers) {
    tempmax1 = std::max(tempmax1, num);
  }
  
  numbers.erase(std::remove(numbers.begin(),   numbers.end(), tempmax1), numbers.end());


  
  c = numbers.back();
  std::cout << a << " " << b << " " << c << "\n";
}
