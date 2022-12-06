#include <iostream>
#include <fstream>
#include <vector>

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
    std::cout << "FIREDCOW: " << lifeguards[i].first << " " << lifeguards[i].second << std::endl;
    for (int j = 0; j < n; j++) {
      if (lifeguards[j] != firedcow) {
        int sum = 0;
        std::pair<int, int> curr_cow = lifeguards[j];
        
        max_time = std::max(max_time, sum);
      }
    }
  }
}
