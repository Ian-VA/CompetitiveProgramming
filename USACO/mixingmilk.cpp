#include <iostream>
#include <vector>
#include <string>

void mix(std::vector<std::pair<int, int>> buckets) {
  int pour = 0;
  for (int i = 0; i < 100; i++) {

    std::pair<int, int> frombucket = buckets[pour];
    std::pair<int, int> tobucket;

    if (pour % 2 == 0){
      tobucket = buckets[0];
      pour = 0;
    } else {
      tobucket = buckets[pour + 1];
    }

    if (tobucket.second + frombucket.second > tobucket.first) {
      for (int j = tobucket.second; j < tobucket.first; j++) {
        buckets[pour].second++;
        buckets[pour - 1].second--;
      }
    } else if (tobucket.second + frombucket.second <= tobucket.first) {
      buckets[pour].second += buckets[pour - 1].second;
      buckets[pour - 1].second = 0;
    }

    std::cout << "ITER: " << i << "FROMBUCKET: " << buckets[pour].second << " " << "TOBUCKET: " << buckets[pour + 1].second << "\n";
    

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
