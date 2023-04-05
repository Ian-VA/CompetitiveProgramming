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

typedef long long ll;
typedef std::pair<int, int> point;

int main()
{
    int n; std::cin >> n;
    std::vector<point> movies;
    int movie_count = 0;

    for (int i = 0; i < n; i++) {
        int a, b; std::cin >> a >> b; movies.push_back({b, a});
    }

    std::sort(movies.begin(), movies.end());

    int curr_time = 0;

    for (auto movie : movies) {
        if (movie.second >= curr_time){
            curr_time = movie.first;
            movie_count++;
        } 
    }

    std::cout << movie_count;



}
