#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>
#include <set>
#include <queue>
#include <bitset>
#include <fstream>

/*
ID: minedra1
PROG: friday
LANG: C++
*/

using i32 = int32_t;
using ll = long long;
using point = std::pair<ll, ll>;

int norm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};

bool isLeap(int year){
        if(year % 100 ==0)
                return year % 400 == 0;
        else
                return year % 4 == 0;
}

int main() {
    std::ifstream fin("friday.in");
    std::ofstream fout("friday.out");

    int n; fin >> n;
    int occ[7] = {0, 0, 0, 0, 0, 0, 0};
    int cnt = 0;

    for(int year = 1900; year < 1900 + n; year++){
        for(int month = 0; month < 12; month++){
            int weekday = (cnt + 12) % 7;
            occ[(weekday + 2) % 7]++;
            cnt += isLeap(year) ? leap[month] : norm[month];
        }
    }

    for (int i = 0; i < 7; i++) {
        fout << occ[i];

        if (i == 6) {
            fout << "\n";
        } else {
            fout << " ";
        }
    }
}

