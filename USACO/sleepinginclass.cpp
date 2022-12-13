#include <iostream>
#include <string>
#include <vector>

void solve(){
  int n; std::cin >> n;
  std::vector<int> periods;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    int curr; std::cin >> curr;
    periods.push_back(curr);
    sum += curr;
  }

  for (int r = n; r >= 0; r++) {
    if (sum % r == 0) {
      for (int i = 0; i < n; i++) {
        
      }
    }
  }
  
}

int main() {
  int t; std::cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
