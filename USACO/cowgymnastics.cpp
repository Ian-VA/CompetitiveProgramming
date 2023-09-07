#include <iostream>
#include <vector>

int main() {
  int k; std::cin >> k;
  int n; std::cin >> n;
  std::vector<std::vector<int>> allcows;
  std::vector<std::pair<int, int>> allpairs;
  int answer = 0;

  for (int i = 0; i < k; i++) {
    std::vector<int> one_iteration;
    allcows.push_back(one_iteration);
    for (int j = 0; j < n; j++) {
      int curr_num; std::cin >> curr_num;
      allcows[i].push_back(curr_num);
    }
  }

  for (int i = 0; i < n; i++) { // generate pairs
    for (int j = i + 1; j < n; j++) {
      std::pair<int, int> curr_pair;
      curr_pair.first = allcows[0][i];
      curr_pair.second = allcows[0][j];

      allpairs.push_back(curr_pair);
    }
  }
  
  for (auto &i : allpairs) { // loop through pairs
    int first = i.first;
    int second = i.second;
    int occurences = 0;
    for (auto k : allcows){ // loop through one k
      
      bool encountered_first = false;
      int encountered_second = false;

      for (auto i : k) { // loop through all numbers in k
        if (i == first){
          encountered_first = true;
        }

        if (encountered_first == true && encountered_second == false) {
          occurences++;
          break;
        }
        if (i == second) {
          encountered_second = true;
        }
      }
    }

    if (occurences == k) {
      answer++;
    }
  }

  std::cout << answer << "\n";
  return 0;
}
