#include <iostream>
#include <vector>
#include <string>

int main() {
  int n; std::cin >> n;
  std::vector<std::vector<std::string>> all_characteristics;
  int max_characteristics = 0;

  for (int i = 0; i < n; i++) {
    std::string trash; std::cin >> trash;
    int iter; std::cin >> iter;
    std::vector<std::string> characteristics;

    for (int i = 0; i < iter; i++) {
      std::string curr_charect; std::cin >> curr_charect;

      characteristics.push_back(curr_charect);
    }

    all_characteristics.push_back(characteristics);
  }
  for (int i = 0; i < n; i++)
  {
    int occurences = 0;
    std::vector<std::string> curr_char = all_characteristics[i];

    for (int j = i + 1; j < n; j++) {
      std::vector<std::string> curr_iter = all_characteristics[j];

      for (int k = 0; k < curr_char.size(); k++) {
        for (int l = 0; l < curr_iter.size(); k++) {
          std::string chare = curr_char[k];
          std::string chareiter = curr_char[i];

          if (chare == chareiter) {
            occurences++;
          }
        }
      }

      max_characteristics = std::max(occurences, max_characteristics);
    }  
  }

  std::cout << max_characteristics;
}
