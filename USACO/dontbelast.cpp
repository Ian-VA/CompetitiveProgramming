#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <numeric>

int main()
{
    std::ifstream fin("notlast.in");
    std::ofstream fout("notlast.out");
    int n; fin >> n;
    int least_cow = 9999;
    int second_least_cow = 9999;
    std::string final_cow; int occurences = 0;

    std::unordered_map<std::string, int> cows = {
        {"Bessie", 0},
        {"Elsie", 0},
        {"Daisy", 0},
        {"Gertie", 0},
        {"Annabelle", 0},
        {"Maggie", 0},
        {"Henrietta", 0},
    };

    for (int i = 0; i < n; i++) {
        std::string curr_cow; fin >> curr_cow;
        int milk; fin >> milk;
        cows[curr_cow] = cows[curr_cow] + milk;
    }

    for (auto &cow : cows) {
        least_cow = std::min(least_cow, cow.second);
    }

    for (auto &cow : cows) {
        if (cow.second > least_cow) {
            second_least_cow = std::min(second_least_cow, cow.second);
        }
    }

    for (auto &cow : cows) {
        if (cow.second == second_least_cow) {
            final_cow = cow.first;
            occurences++;
        }
    }

    if (occurences == 1) {
        fout << final_cow << "\n";
    } else {
        fout << "Tie" << "\n";
    }


}
