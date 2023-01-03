#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
 
typedef long long int llint;
 
int main() {
    llint num; std::cin >> num;
 
    std::cout << num << " ";
 
    for (llint curr_num = num; curr_num != 1;) {
        if (curr_num % 2 == 0) {
            curr_num = curr_num / 2;
        } else {curr_num = curr_num*3+1;}
        std::cout << curr_num << " ";
    }
}
