#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>


int main()
{
    std::ifstream fin ("pails.in");
    std::ofstream fout ("pails.out");
    int x, y, m;
    int max = 0;
    std::vector<int> allcombinations;
    int temp = 0;
    int temp1 = 0;
    int past = 0;
    fin >> x >> y >> m;

    for (int i = 0; i < m; i++){
        temp = x * i;

        for (int j = 0; j < m; j++){
            temp1 = (x * i) + (y * j);
            allcombinations.push_back(temp1);
        }

        allcombinations.push_back(temp);

    }

    std::sort(allcombinations.begin(), allcombinations.end());

    for (int i = 0; i < allcombinations.size(); i++){
        if (allcombinations[i] > m){
            fout << allcombinations[i - 1];
            break;
        } else if (allcombinations[i] == m){
            fout << allcombinations[i];
            break;
        } else {
            max = std::max(max, allcombinations[i]);
        }
    }

    
}
