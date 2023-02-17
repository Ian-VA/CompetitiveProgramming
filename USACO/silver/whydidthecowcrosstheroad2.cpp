#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <algorithm>

int main() 
{
    std::ofstream fout("maxcross.out");
    std::ifstream fin("maxcross.in");

    int n, k, b, min = 99999; fin >> n >> k >> b;
    std::vector<bool> brokenlights(n+1, 0);
    std::vector<int> psum(n+2);

    for (int i = 0; i < b; i++) {
        int a; fin >> a; brokenlights[a] = 1;
    }

    psum[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        psum[i] = psum[i-1] + brokenlights[i];
    }

    int j = k;
    for (int i = 1; j <= n; i++, j++) {
        min = std::min(min, psum[j] - psum[i-1]);
    }

    fout << min;
}
