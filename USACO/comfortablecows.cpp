#include <iostream>
#include <vector>
#include <string>

int main() {
  int n; std::cin >> n;
  std::vector<std::pair<int, int>> cows;
  int all_comfortablecows = 0;
  std::vector<std::pair<int, int>> currcows;

  for (int i = 0; i < n; i++) {
    int x; std::cin >> x; int y; std::cin >> y;
    std::pair<int, int> cow; cow.first = x; cow.second = y;
    cows.push_back(cow);
  }

  for (int i = 0; i < n; i++) {
    int comfort = 0;
    currcows.push_back(cows[i]);
    for (int i = 0; i < currcows.size(); i++) {
      int numcomfortablecows = 0;
      for (int j = 0; j < currcows.size(); j++) {
        if (currcows[i].first == currcows[j].first && currcows[i] != currcows[j] || currcows[j].second == currcows[i].second && currcows[i] != currcows[j]) {
          numcomfortablecows++;
        }
      }

      if (numcomfortablecows == 3) {
        comfort++;
        numcomfortablecows = 0;
      } else {
        numcomfortablecows = 0;
      }
    }

    std::cout << comfort << "\n";
    comfort = 0;
  }


}
