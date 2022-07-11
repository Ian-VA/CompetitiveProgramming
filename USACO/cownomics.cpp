#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>

/*
ID: Ian Atroshchenko [birb]
TASK: cownomics
LANG: C++                 
*/

int main()
{
    std::ifstream fin ("cownomics.in");
    std::ofstream fout ("cownomics.out");
    int n, m, counter, num_differences;
    num_differences = 0;
    counter = 0;
    fin >> n; fin >> m;
    std::vector<std::string> cows, concat;
    std::string concate, curr_string;

    for (int i = 0; i < n * 2; i++){
        std::string curr_cow;
        fin >> curr_cow;
        cows.push_back(curr_cow);
    }

    for (int h = 0; h < m; h++){
        for (int i = 0; i < n * 2; i++){        
            curr_string.push_back(cows[i][h]);
        }
        concat.push_back(curr_string);
        curr_string.clear();
    }

    for (auto i : concat){
        std::string substr1;
        std::string substr2;
        for (int j = 0; j < m; j++){
            if (j >= n) {
                substr2.push_back(i[j]);
            } else {
                substr1.push_back(i[j]);
            }
        }

        for (int j = 0; j < n; j++){
            char memory = substr1[j];

            if (substr2.find(memory) == std::string::npos){
                num_differences += 1;
            } 
        }

        if (num_differences >= n){
            num_differences = 0;
            counter += 1;
        }
    }
    std::cout << counter << std::endl;
}
