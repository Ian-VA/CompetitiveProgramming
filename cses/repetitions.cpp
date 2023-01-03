#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long int llint;
 
int main() {
    std::string dna; std::cin >> dna;
    int max_sequence = 0;
    int sequence = 0;

    for (int i = 0; i < dna.size();) {
        char to_find = dna[i];
        int sequence = 0;

        for (; i < dna.length() && to_find == dna[i]; ++i) {++sequence;}

        if (sequence > max_sequence) {max_sequence = sequence;}
    }

    std::cout << max_sequence;
    

}
