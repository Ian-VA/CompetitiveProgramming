#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iterator>
#include <deque>
#include <fstream>
#define n 1001

typedef long long ll;
int area = 0, perimeters = 0, size;
int maxarea = -1, minperimeter = 9999999;

void floodfill(int i, int j, char grid[n][n], bool visited[n][n]) 
{
    if (i < 0 || i >= size || j < 0 || j >= size || visited[i][j])
        return;

    area++;

    visited[i][j] = true;
    int perimeter = 4;
    bool ok1 = false, ok2 = false, ok3 = false, ok4 = false;


    if (grid[i][j+1] == '#') {perimeter--; ok1 = true;}
    if (grid[i+1][j] == '#') {perimeter--; ok2 = true;}
    if (grid[i-1][j] == '#') {perimeter--; ok3 = true;}
    if (grid[i][j-1] == '#') {perimeter--; ok4 = true;}

    perimeters += perimeter;

    if (ok1) {
        floodfill(i, j+1, grid, visited);
    }

    if (ok2) {
        floodfill(i+1, j, grid, visited);
    }

    if (ok3) {
        floodfill(i-1, j, grid, visited);
    }

    if (ok4) {
        floodfill(i, j-1, grid, visited);
    }

    

}


int main()
{
    std::ifstream fin("perimeter.in");
    std::ofstream fout("perimeter.out");
    fin >> size;
    char grid[n][n];
    std::vector<std::pair<int, int>> perimeter_area;
    bool visited[n][n];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            char a; fin >> a; grid[i][j] = a;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (grid[i][j] == '#' && !visited[i][j]) {
                floodfill(i, j, grid, visited);
                maxarea = std::max(area, maxarea);
                perimeter_area.push_back(std::pair<int, int>(area, perimeters));
                area = 0;
                perimeters = 0;
            }
        }
    }

    for (int i = perimeter_area.size(); i >= 0; i--) {
        if (perimeter_area[i].first == maxarea) {
            minperimeter = std::min(minperimeter, perimeter_area[i].second);
        }
    }

    fout << maxarea << " " << minperimeter;
}
