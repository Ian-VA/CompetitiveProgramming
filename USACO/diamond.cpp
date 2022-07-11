#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>

/*
ID: Ian Atroshchenko [birb]
TASK: diamond
LANG: C++                 
*/

int main()
{
    std::ifstream fin ("diamond.in");
    std::ofstream fout ("diamond.out");
    int num_diamond = 0;
    int n, k;
    n = 0;
    fin >> n;
    int arr_diamond[n];
    k = 0; fin >> k;

    for (int i = 0; i < n; i++){
        fin >> arr_diamond[i];
    }

    for (int i = 0; i < n; i++){
        if (pow(arr_diamond[i] - arr_diamond[i + 1], 2) <= pow(k, 2)) {
            num_diamond += 1;
        } else {
            continue;
        }
    }

    fout << num_diamond;

}
