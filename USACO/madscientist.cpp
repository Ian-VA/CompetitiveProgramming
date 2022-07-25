#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>

int main()
{
    std::ifstream fin ("breedflip.in");
    std::ofstream fout ("breedflip.out");
    int n; fin >> n;
    std::string a, b;
    int moves = 0;

    for (int i = 0; i < n; i++){
        char j; fin >> j;
        a.push_back(j);
    }

    for (int i = 0; i < n; i++){
        char j; fin >> j;
        b.push_back(j);
    }

    for (int i = 0; i < n; i++){
        char currentchara = a[i];
        char currentcharb = b[i];

        if (currentchara == currentcharb){
            continue;
        } else if (currentchara != currentcharb){
            moves += 1;
            for (int j = i + 1; j < n; j++){
                char advance_a = a[j];
                char advance_b = b[j];

                if (advance_b == advance_a){
                    i += 1;
                    break;
                } else {
                    i += 1;
                    continue;
                }
            }            
        }

    }

    fout << moves << "\n";
    
}
