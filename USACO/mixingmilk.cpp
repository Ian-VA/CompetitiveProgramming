#include <iostream>
#include <vector>
#include <string>

void mix(std::vector<std::pair<int, int>> buckets) {
  int pour = 0;
  for (int i = 0; i < 100; i++) {
    pour = pour % 3;
    std::pair<int, int> frombucket = buckets[pour];
    std::pair<int, int> tobucket = buckets[pour + 1];

    if (pour == 2) {
      tobucket = buckets[0];
    }

    if (tobucket.second + frombucket.second <= tobucket.first) {
      if (tobucket == buckets[0]) {
        buckets[0].second += buckets[pour].second;
        buckets[pour].second = 0;
      } else {
        buckets[pour + 1].second += buckets[pour].second;
        buckets[pour].second = 0;
      }
    }

    if (tobucket.second + frombucket.second > tobucket.first) {

      if (tobucket == buckets[0]) {
        for (int j = tobucket.second; j < tobucket.first; j++) {
          buckets[0].second++;
          buckets[pour].second--;
        }
      } else {
        for (int j = tobucket.second; j < tobucket.first; j++) {
          buckets[pour+1].second++;
          buckets[pour].second--;
        }
      }
    } 
    
    pour++;
  }
  for (auto i : buckets) {
    std::cout << i.second << "\n";
  }
}


int main() {
  std::vector<std::pair<int, int>> buckets;
  for (int i = 0; i < 3; i++) {
    int c; std::cin >> c; int m; std::cin >> m;
    std::pair<int, int> bucket;
    bucket.first = c; bucket.second = m;
    buckets.push_back(bucket);
  }

  mix(buckets);
}
