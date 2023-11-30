#include <string>
#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>

int n, m;
int minmoney = 99999;

struct Cow
{
    public:
        int rangestart;
        int range_end;
        int needscooled;

        Cow(int rangestart, int range_end, int needscooled) {
            this->rangestart = rangestart;
            this->range_end = range_end;
            this->needscooled = needscooled;
        }

};

struct AirConditioner
{
    public:
        int rangestart; int range_end; int reduce; int money;

        AirConditioner(int rangestart, int range_end, int reduce, int money) {
            this->rangestart = rangestart;
            this->range_end = range_end;
            this->reduce = reduce;
            this->money = money;
        }
};

std::vector<std::vector<int>> allPossibleSubset(std::vector<int> arr, int n)
{
    std::vector<std::vector<int>> allcomb;
    int count = pow(2, n);
    for (int i = 0; i < count; i++) {
        std::vector<int> subset;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0)
                subset.push_back(arr[j]);
        }
        allcomb.push_back(subset);
    }

    return allcomb;
}


int main()
{
    std::cin >> n >> m;
    std::vector<int> stalls(100, 0);
    std::vector<Cow> cows;
    std::vector<int> airconditioners(m);
    std::vector<AirConditioner> airconditionerslist;

    for (int i = 0; i < m; i++) {
        airconditioners[i] = i;
    }

    std::vector<std::vector<int>> subsets = allPossibleSubset(airconditioners, m);

    for (int i = 0; i < n; i++) {
        int startrange, endrange, cool; std::cin >> startrange >> endrange >> cool;
        Cow cow = Cow(startrange, endrange, cool);

        for (int j = startrange; j <= endrange; j++) {
            stalls[j] += cool;
        }
        
        cows.push_back(cow);
    }

    for (int i = 0; i < m; i++) {
        int startrange, endrange, cool, price; std::cin >> startrange >> endrange >> cool >> price;
        AirConditioner airconditioner = AirConditioner(startrange, endrange, cool, price);
        airconditionerslist.push_back(airconditioner);
    }

    for (auto &i : subsets) {
        std::vector<int> newarr = stalls;
        int money = 0;
        for (auto &j : i) {
            AirConditioner airconditioner = airconditionerslist[j];

            for (int k = airconditioner.rangestart; k <= airconditioner.range_end; k++) {
                newarr[k] = newarr[k] - airconditioner.reduce;
            }

            money += airconditioner.money;

        }

        bool zeros = std::all_of(newarr.begin(), newarr.end(), [](int i) { return i<=0; });
        if (zeros) {
            minmoney = std::min(minmoney, money);
        }

    }

    std::cout << minmoney << "\n";

}
