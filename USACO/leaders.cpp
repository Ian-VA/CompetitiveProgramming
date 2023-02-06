#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>



int main()
{
    int n; std::cin >> n;
    std::string cows; std::cin >> cows;
    int cowlists[n];
    int h_count = 0, g_count = 0, tempgcount = 0, temphcount = 0;
    std::vector<int> leaderindex;
    int pairs = 0;
    std::vector<char> leaderbreeds;
    std::vector<std::pair<int, int>> knownpairs;

    for (int i = 0; i < n; i++) {
        if (cows[i] == 'H') {h_count++;}
        else {g_count++;}

        int a; std::cin >> a; cowlists[i] = a;
    }

    if (g_count == 1 && h_count == 1){
        std::cout << "1";
    } else {
        for (int i = 0; i < n; i++) {if (cows[i] == 'H' && cowlists[i] != 1) {leaderindex.push_back(i); leaderbreeds.push_back('H'); break;}}
        for (int i = 0; i < n; i++) {if (cows[i] == 'G' && cowlists[i] != 1) {leaderindex.push_back(i); leaderbreeds.push_back('G'); break;}}

        for (int i = 0; i < leaderindex.size(); i++) {
            char character = leaderbreeds[i];

            if (character == 'G') {
                if (leaderindex[i] != n-1){
                    for (int j = leaderindex[i]; j < cowlists[i]; j++) {
                        if (cows[j] == 'G') {tempgcount++;}
                    }
                } else if (leaderbreeds[i] == 'G') {
                    tempgcount++;
                }
            } else {

                if (leaderindex[i] != n-1) {
                    for (int j = leaderindex[i]; j < cowlists[i]; j++) {
                        if (cows[j] == 'H') {temphcount++;}
                    }
                } else if (leaderbreeds[i] == 'H') {
                    temphcount++;
                }
            }
        }

        std::pair<int, int> knownpair; knownpair.first = leaderindex[0]; knownpair.second = leaderindex[1];

        if (tempgcount == g_count && temphcount == h_count) {pairs++; knownpairs.push_back(knownpair);}
        

        for (int i = 0; i < n; i++) {
            if (cowlists[i] != 1) {
                for (int j = i; j < cowlists[i]; j++) {
                    if (std::find(leaderindex.begin(), leaderindex.end(), j) != leaderindex.end() && *std::find(leaderindex.begin(), leaderindex.end(), j) != i) {
                        std::pair<int, int> newpair; newpair.first = i; newpair.second = j;
                        std::pair<int, int> doublecheck; doublecheck.second = i; doublecheck.first = j;
                        if (cows[i] != cows[j] && std::find(knownpairs.begin(), knownpairs.end(), newpair) == knownpairs.end() && std::find(knownpairs.begin(), knownpairs.end(), doublecheck) == knownpairs.end()) {pairs++; knownpairs.push_back(newpair);}
                    }
                }
            }
        }

        std::cout << pairs;
    }



}
