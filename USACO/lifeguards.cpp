#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
  std::ofstream fout("lifeguards.out");
  std::ifstream fin("lifeguards.in");
  int n; fin >> n;
  std::vector<std::pair<int, int>> lifeguards;
  int max_time = 0;
  std::vector<int> allranges;

  for (int i = 0; i < n; i++) {
    int start; int end; fin >> start; fin >> end;
    std::pair<int, int> lifeguard; lifeguard.first = start; lifeguard.second = end;

    lifeguards.push_back(lifeguard);
  }

  for (int k = 0; k < n; k++) {
    std::pair<int, int> fired_lifeguard = lifeguards[k];

    for (auto i : lifeguards) {
      if (i != fired_lifeguard) {
        for (int l = i.first + 1; l <= i.second; l++) {
          allranges.push_back(l);
        } 
    
        std::sort(allranges.begin(), allranges.end());
        allranges.erase(std::unique(allranges.begin(), allranges.end() ), allranges.end() );

        max_time = std::max(max_time, (int) allranges.size());

      }
    }

    allranges.clear();
  }   
  fout << max_time << "\n";
}
