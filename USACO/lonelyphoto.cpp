#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
  int n; std::cin >> n;
  std::string cows; std::cin >> cows;
  std::vector<std::string> photos;
  int answer = 0;

  for (int i = 0; i < n; i++){
    std::string photo;
    photo.clear();
    photo.push_back(cows[i]);
    for (int j = i + 1; j < n; j++){
      photo.push_back(cows[j]);
      if (photo.length() >= 3) {
        photos.push_back(photo);
      }
    }
  }
  
  
  for (auto& i : photos) {
    int g_count = 0;
    int h_count = 0;

    for (char j : i) {
      if (j == 'G') {
        g_count += 1;
      } else if (j == 'H') {
        h_count += 1;
      }
    }

    if (g_count == 1 || h_count == 1) {
      answer++;
    }
  }

  std::cout << answer << "\n";
}
