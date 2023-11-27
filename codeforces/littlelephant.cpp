#include <vector>
#include <iostream>
#include <string>

typedef long long ll;

int main()
{
    std::string digits; std::cin >> digits;
    int recorded_size = digits.size();

    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] == '0'){
            digits.erase(i, 1);
            break;
        }
    }

    if (digits.size() == recorded_size) {digits.erase(0, 1);}

    std::cout << digits;
}
