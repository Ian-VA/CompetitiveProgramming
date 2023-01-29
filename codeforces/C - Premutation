#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <fstream>


typedef long long ll;

void solve()
{
    int n; std::cin >> n;
    int permutations[n][n-1];
    int finalpermutation[n];
    int answer[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            int a; std::cin >> a; permutations[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        finalpermutation[i] = permutations[i][n-2];
    }



    int counta = std::count(finalpermutation, finalpermutation+n, finalpermutation[0]);

    if (counta > 1) {
        answer[n-1] = finalpermutation[0];

        for (int i = 0; i < n; i++) {
            if (permutations[i][n-2] != finalpermutation[0]){
                for (int j = 0; j < n-1; j++) {
                    answer[j] = permutations[i][j];
                }

                break;
            }
        }
    } else {
        answer[n-1] = finalpermutation[1];

        for (int i = 0; i < n; i++) {
            if (permutations[i][n-2] == finalpermutation[0]) {
                for (int j = 0; j < n-1; j++) {
                    answer[j] = permutations[i][j];
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        std::cout << answer[i] << " ";
    }

    
}
    

int main() {
    int t; std::cin >> t;

    while (t--)
    {
        solve();
    }
}
