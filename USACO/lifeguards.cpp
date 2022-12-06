#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
  std::ofstream fout("lifeguards.out");
  std::ifstream fin("lifeguards.in");
  int n; std::cin >> n;
  std::vector<std::pair<int, int>> lifeguards;
  int max_time = 0;

  for (int i = 0; i < n; i++) {
    int start; int end; std::cin >> start; std::cin >> end;
    std::pair<int, int> lifeguard; lifeguard.first = start; lifeguard.second = end;

    lifeguards.push_back(lifeguard);
  }

  for (int i = 0; i < n; i++) {
    std::pair<int, int> firedcow = lifeguards[i];
    for (int j = 0; j < n; j++) {
      if (lifeguards[j] != firedcow) {
        std::pair<int, int> curr_cow = lifeguards[j];
        for (int k = 0; k < n; k++) {
          if (lifeguards[k] != firedcow && lifeguards[k] != lifeguards[j]) {
            std::pair<int,int> compare_cow = lifeguards[k];
            std::vector<int> rangecurr, rangecompare;

            for (int l = curr_cow.first + 1; l <= curr_cow.second; l++) { // startpoints dont count as time
              rangecurr.push_back(l);
            }

            for (int l = compare_cow.first + 1; l <= compare_cow.second; l++) {
              rangecompare.push_back(l);
            }
            std::vector<int> delta;
            for (auto &l : rangecurr) {
              for (auto &m : rangecompare){
                if (l != m) {
                  delta.push_back(l);
                }
              }
            }
            int h = delta.size();
            rangecurr.clear();
            rangecompare.clear();
            max_time = std::max(max_time, h);
            delta.clear();
          }
        }
      }
    }
  }

  std::cout << max_time << "\n";
}
