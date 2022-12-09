#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string tictac_cow[3];
  int singlewinners = 0; int doublewinners = 0;

  for (int i = 0; i < 3; i++) {
    std::string curr; std::cin >> curr;
    tictac_cow[i] = curr;
  }

  for (int i = 0; i < 3; i++) { // check rows
    std::string curr = tictac_cow[i];
    std::vector<char> characters;
    for (int j = 0; j < 3; j++) {
      char currchar = curr[j];

      if (std::find(characters.begin(), characters.end(), char) == characters.end()) {
        characters.push_back(currchar);
      }
    }

    if (characters.size() == 2) {
      doublewinners++;
    } else if (characters.size() == 1){
      singlewinners++;
    }
  }
}
