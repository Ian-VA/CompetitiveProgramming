#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>

int greatestdenom(int a, int b)
{
    if (b == 0){
        return a;
    } else {
        return greatestdenom(b, a % b);
    }
}

int lcm(int a, int b)
{
    return (a / greatestdenom(a, b)) * b;
}

std::vector<std::pair<int, int>> allcombinations(int num)
{
    std::vector<std::pair<int, int>> all_pairs;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            std::pair<int, int> pair;

            if (i + j == num){
                pair.first = i; pair.second = j;
                all_pairs.push_back(pair);
            }
        }
    }

    return all_pairs;
}

int main()
{
    int n; std::cin >> n;
    std::vector<int> all;
    std::vector<std::pair<int, int>> allleasts;
    for (int i = 0; i < n; i++) {
        int curr_num; std::cin >> curr_num; all.push_back(curr_num);
    }

    for (int i : all){
        std::vector<std::pair<int, int>> allcomb = allcombinations(i);
        int least = 99999;
        std::vector<std::pair<std::pair<int, int>, int>> all_lcms;
        std::pair<int, int> curr_pair;

        for (std::pair<int, int> i : allcomb) {
            int curr_lcm = lcm(i.first, i.second);
            std::pair<std::pair<int, int>, int> curr_pair;
            curr_pair.first.first = i.first; curr_pair.first.second = i.second; curr_pair.second = curr_lcm;
            all_lcms.push_back(curr_pair);
        }

        for (auto i : all_lcms) {
            if (least > i.second) {
                least = i.second; 
                curr_pair.first = i.first.first;
                curr_pair.second = i.first.second;
            }
        }

        allleasts.push_back(curr_pair);
    }

    for (auto i : allleasts){
        std::cout << i.first << " " << i.second << "\n";
    }
}

