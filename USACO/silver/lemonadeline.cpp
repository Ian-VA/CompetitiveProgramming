#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <numeric>
#include <queue>
#include <string>

/*
Primary observation: Sorting the input always gets the best result
*/


int main() {
    std::ofstream fout("lemonade.out");
    std::ifstream fin("lemonade.in");
    
    int n; fin >> n;
    std::vector<int> cows;
    std::vector<int> cowswaiting;
    
    for (int i = 0; i < n; i++) {
        int a; fin >> a; cows.push_back(a);
    }
    
    std::sort(cows.begin(), cows.end(), std::greater<>());

    for (auto& i : cows) {
        if (i >= cowswaiting.size()) {
            cowswaiting.push_back(i);
        }
    }
    
    fout << cowswaiting.size() << "\n";
    
}
