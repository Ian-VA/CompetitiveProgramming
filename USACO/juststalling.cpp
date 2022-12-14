#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main() {
  int n; std::cin >> n;
  int answer = 0;
  std::vector<long long> cows, limits;

  for (int i = 0; i < n; i++) {
    int f; std::cin >> f; cows.push_back(f);
  }

  for (int i = 0; i < n; i++) {
    int h; std::cin >> h; limits.push_back(h);
  }

  do
  {
    int occurences = 0;
    for (int i = 0; i < n; i++) {
      if (cows[i] <= limits[i]) {
        occurences++;
      }
    }

    if (occurences >= n) {
      answer++;
    }
  } while (next_permutation(cows.begin(), cows.end()));

  std::cout << answer;
}
