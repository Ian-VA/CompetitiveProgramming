#include <iostream>
#include <string>
#include <vector>

int main() {
  int k = 1;
  int n; std::cin >> n;
  std::string all; std::cin >> all;
  std::vector<std::string> allpaths;

  while (true)
  {
    for (int i = 0; i < n; i++) {
      std::string currpath;
      char ptr1 = all[i];
      currpath.push_back(ptr1);
      for (int j = 0; j < n; j++) {
        char ptr2 = all[j];

        if (currpath.size() == k) {
          allpaths.push_back(currpath);
          currpath.clear();
        } 
      }
    }

    k++;
    break;
    
  }


  for (auto i : allpaths) {
    std::cout << i << "\n";
  }
}
