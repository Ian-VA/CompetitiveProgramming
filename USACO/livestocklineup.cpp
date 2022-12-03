#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


void setIO(std::string s) {
      std::ios_base::sync_with_stdio(0); std::cin.tie(0); 
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
}

int main() {  
	setIO("lineup");
	int n; std::cin >> n;
	std::vector<std::pair<std::string, std::string>> constraints;
	std::vector<std::string> allcows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
	std::sort(allcows.begin(), allcows.end());

	for (int i = 0; i < n; i++) {
		std::string demandingcow; std::cin >> demandingcow;

		for (int j = 0; j < 4; j++) {
			std::string trash; std::cin >> trash;
		}

		std::string othercow; std::cin >> othercow;

		std::pair<std::string, std::string> new_pair; new_pair.first = demandingcow; new_pair.second = othercow;
		constraints.push_back(new_pair);
	}

	int occurences = 0;

	do {
		occurences = 0;

		for (auto i : constraints) {
			std::string cow1 = i.first;
			std::string cow2 = i.second;

			auto a = std::find(allcows.begin(), allcows.end(), cow1);
			auto b = std::find(allcows.begin(), allcows.end(), cow2);
			if (std::abs(a - b) == 1) {
				occurences++;
			}
		}

		if (occurences == n) {
			break;
		}
		
	} while (next_permutation(allcows.begin(), allcows.end()));

	for (auto cow : allcows) {
		std::cout << cow << "\n";
	}


}
