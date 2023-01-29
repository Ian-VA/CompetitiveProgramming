#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <fstream>


typedef long long ll;


int main() {
    std::ofstream fout("shell.out");
    std::ifstream fin("shell.in");

    int n; fin >> n;
    int maxpoints = -10;
    int haspebble[3] = {0, 0, 0};
    int pebblelocation = 0;
    int bessieguesses[n];
    std::pair<int, int> swaps[n];

    for (int i = 0; i < n; i++) {
        std::pair<int, int> pair; int swap1, swap2, guess; fin >> swap1 >> swap2 >> guess; pair.first = swap1; pair.second = swap2;
        swaps[i] = pair;
        bessieguesses[i] = guess;
    }

    for (int i = 0; i < 4; i++) {
        pebblelocation = i;
        int points = 0;
        for (int j = 0; j < n; j++) {
            if (swaps[j].first == pebblelocation) {
                pebblelocation = swaps[j].second;
            } else if (swaps[j].second == pebblelocation){
                pebblelocation = swaps[j].first;
            }

            if (bessieguesses[j] == pebblelocation){
                points++;
            }


        }

        maxpoints = std::max(points, maxpoints);
    }

    fout << maxpoints;

}
