#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <deque>

typedef long long ll;

void solve()
{
    int n, s, r; std::cin >> n >> s >> r;
    std::deque<int> finalseq(n);
    finalseq.push_back(s-r);
    int sum = 0;

    while (sum < r)
    {
        for (int i = 1; i < n; i++)
        {
            if (sum == r) break;
            finalseq[i]++; sum++;
        }
    }

    for (int i = 1; i < finalseq.size(); i++){
        std::cout << finalseq[i] << " ";
    }

    std::cout << "\n";

}

int main()
{
    int t; std::cin >> t;

    while (t--) {solve();}
}
