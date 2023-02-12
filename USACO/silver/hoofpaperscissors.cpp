#include <bits/stdc++.h>
#include <iostream>
#include <fstream>

int main() 
{
    std::ofstream fout("hps.out");
    std::ifstream fin("hps.in");

	int n;
	fin >> n;
	std::vector<int> hooves(n + 1), paper(n + 1), scissors(n + 1);

	for (int i = 1; i <= n; i++) {
		hooves[i] += hooves[i - 1];
		paper[i] += paper[i - 1];
		scissors[i] += scissors[i - 1];

		char action;
		fin >> action;

		if (action == 'H') {
			paper[i]++;
		} else if (action == 'P') {
			scissors[i]++;
		} else if (action == 'S') {
			hooves[i]++;
		}
	}

	int max_wins = 0;

	for (int i = 1; i <= n; i++) {
		int before_wins = std::max(hooves[i], std::max(paper[i], scissors[i]));
		int after_wins = std::max({
			hooves[n] - hooves[i],
			paper[n] - paper[i],
			scissors[n] - scissors[i]
		});

		max_wins = std::max(max_wins, before_wins + after_wins);

	}

	fout << max_wins << std::endl;
}
