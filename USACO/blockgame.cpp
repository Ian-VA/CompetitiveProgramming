#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>

int main()
{
    std::ifstream fin ("blocks.in");
    std::ofstream fout ("blocks.out");
    int n; fin >> n;
    int solution[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::string arr[100][2];

    for (int i = 0; i < n; i++){
        fin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < n; i++){
        for (char j = 'a'; j <= 'z'; j++){
            int occur1 = 0;
            int occur2 = 0;

            for (int h = 0; h < arr[i][0].length(); h++){
                if (j == arr[i][0][h]){
                    occur1++;
                }
            }

            for (int h = 0; h < arr[i][1].length(); h++){
                if (j == arr[i][1][h]){
                    occur2++;
                }
            }

            int maxe = std::max(occur1, occur2);
            solution[j - 'a'] = solution[j - 'a'] + maxe;
        }

    }

    for (int i = 0; i < 26; i++){
        std::cout << solution[i] << "\n";
    }
    
}
