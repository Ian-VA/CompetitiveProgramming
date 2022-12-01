#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <list>
#include <stack>

#include<iostream>
#include <list>

int indegree[101], outdegree[101];

int main()
{
    std::ifstream fin ("factory.in");
    std::ofstream fout ("factory.out");
    int n; fin >> n;

    for (int i = 0; i < n - 1; i++) {
        int out_degree; fin >> out_degree;
        int in_degree; fin >> in_degree;

        outdegree[out_degree]++; indegree[in_degree]++;
    }

    bool encountered_sink = false;
    int sinkIdx = -1;

    for (int i = 0; i <= n; i++) {
        if (encountered_sink == true && outdegree[i] == 0 && indegree[i] > 0) {
            sinkIdx = -1;
            break;
        }

        if (outdegree[i] == 0 && indegree[i] > 0) {
            encountered_sink = true;
            sinkIdx = i;
        }
    }

    fout << sinkIdx;


}


