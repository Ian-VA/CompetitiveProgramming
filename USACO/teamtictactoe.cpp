#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

void setIO(std::string s) {
  std::ios_base::sync_with_stdio(0); std::cin.tie(0); 
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("tttt");

    std::string tictac_cow[3];
    int singlewinners = 0; int doublewinners = 0;
    std::vector<std::pair<char, char>> cowteams;
    std::vector<char> singlewin;

    for (int i = 0; i < 3; i++) {
        std::string curr; std::cin >> curr;
        tictac_cow[i] = curr;
    }

    for (int i = 0; i < 3; i++) { // check rows
        std::string curr = tictac_cow[i];
        std::vector<char> characters;
        for (int j = 0; j < 3; j++) {
            char currchar = curr[j];

            if (std::find(characters.begin(), characters.end(), currchar) == characters.end()) {
                characters.push_back(currchar);
            }
        }

        if (characters.size() == 2) {
            if (std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(characters[0], characters[1])) == cowteams.end() || std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(characters[1], characters[0])) == cowteams.end()) {
                doublewinners++;
                cowteams.push_back(std::pair<char, char>(characters[0], characters[1]));
            }
        } else if (characters.size() == 1){
             if (std::find(singlewin.begin(), singlewin.end(), characters[0]) == singlewin.end()) {
                singlewinners++;
                singlewin.push_back(characters[0]);
            }
        }

        characters.clear();
    }


    for (int i = 0; i < 3; i++) { // columns
        std::vector<char> characters;
        for (int j = 0; j < 3; j++) {
            char currchar = tictac_cow[j][i];

            if (std::find(characters.begin(), characters.end(), currchar) == characters.end()) {
                characters.push_back(currchar);
            }
        }

        if (characters.size() == 2) {
            if (std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(characters[0], characters[1])) == cowteams.end() || std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(characters[1], characters[0])) == cowteams.end()) {
                doublewinners++;
                cowteams.push_back(std::pair<char, char>(characters[0], characters[1]));
            }
        } else if (characters.size() == 1){
            if (std::find(singlewin.begin(), singlewin.end(), characters[0]) == singlewin.end()) {
                singlewinners++;
                singlewin.push_back(characters[0]);
            }
        }

        characters.clear();

    }

    std::vector<char> diagonal1; 
    for (int j = 0; j < 3; j++) {

        if (std::find(diagonal1.begin(), diagonal1.end(), tictac_cow[j][j]) == diagonal1.end()) {
            diagonal1.push_back(tictac_cow[j][j]);
        }
    }

    if (diagonal1.size() == 2) {
        if (std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(diagonal1[0], diagonal1[1])) == cowteams.end() || std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(diagonal1[1], diagonal1[0])) == cowteams.end()) {
            doublewinners++;
            cowteams.push_back(std::pair<char, char>(diagonal1[0], diagonal1[1]));
        }
    } else if (diagonal1.size() == 1){
        if (std::find(singlewin.begin(), singlewin.end(), diagonal1[0]) == singlewin.end()) {
            singlewinners++;
            singlewin.push_back(diagonal1[0]);
        }
    }

    std::vector<char> diagonal2;

    diagonal2.push_back(tictac_cow[2][0]); diagonal2.push_back(tictac_cow[1][1]); diagonal2.push_back(tictac_cow[0][2]);

    if (diagonal2.size() == 2) {
        if (std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(diagonal2[0], diagonal2[1])) == cowteams.end() || std::find(cowteams.begin(), cowteams.end(), std::pair<char, char>(diagonal2[1], diagonal2[0])) == cowteams.end()) {
            doublewinners++;
            cowteams.push_back(std::pair<char, char>(diagonal2[0], diagonal2[1]));
        }
    } else if (diagonal2.size() == 1){
        if (std::find(singlewin.begin(), singlewin.end(), diagonal2[0]) == singlewin.end()) {
            singlewinners++;
            singlewin.push_back(diagonal1[0]);
        }
    }




    std::cout << singlewinners << "\n" << doublewinners << "\n";
}
