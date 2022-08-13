#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <numeric>


int main()
{
    int n; std::cin >> n;
    double mean = 0;
    int result = 0;
    double sum = 0;
    std::vector<int> flowers;

    for (int i = 0; i < n; i++){
        int temp = 0; std::cin >> temp;
        flowers.push_back(temp);
    }


    for (int i = 0; i < n; i++){
        int start_point = flowers[i];
        for (int j = i + 1; j < n + 1; j++)
        {
            int endpoint = flowers[j];
            std::vector<int> all_curr_flowers;

            for (int h = i; h < j; h++){
                all_curr_flowers.push_back(flowers[h]);
            }

            for (auto i : all_curr_flowers){
                sum += i;
            }

            mean = sum / all_curr_flowers.size();
            sum = 0;

            if (std::fmod(mean, 1.0) == 0 && std::find(all_curr_flowers.begin(), all_curr_flowers.end(), mean) != all_curr_flowers.end()){
                result++;
            }

            all_curr_flowers.clear();

            
        }

    }

    std::cout << result;
}
