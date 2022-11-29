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
    std::ifstream fin("cownomics.in");
    std::ofstream fout("cownomics.out");
    int n; fin >> n; int m; fin >> m; int positions = 0;
    std::string spotty[n], plain[n];

    for (std::string &s : spotty) {
        fin >> s;
    }

    for (std::string &s : plain) {
        fin >> s;
    }

    for (int i = 0; i < m; i++) {
        bool different = true;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (spotty[j][i] == plain[k][i]){
                    different = false;
                }
            }
        }

        positions += different;
    }

    fout << positions;
}
