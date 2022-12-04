#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

void setIO(std::string s)
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    setIO("circlecross");
    std::string cows; getline(std::cin, cows);
    int answer = 0;
    std::vector<int> start(26, -1);
    std::vector<int> end(26, -1);
    

	for (int i = 0; i < cows.size(); ++i) {
		if (start[cows[i]-'A'] == -1) start[cows[i]-'A'] = i;
		else end[cows[i]-'A'] = i;
	}
    

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            int starti = start[i];
            int startj = start[j];
            int endi = end[i];
            int endj = end[j];

            if (starti < startj && startj < endi && endi < endj) {
                answer++;
            }
        }
    }

    std::cout << answer;


}
