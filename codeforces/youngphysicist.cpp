#include <vector>
#include <iostream>
#include <string>


typedef long long ll;

int main()
{
    ll n, sum = 0; std::cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c; std::cin >> a >> b >> c; sum += a+b+c;
    }

    if (!sum) {std::cout << "YES";} else {std::cout << "NO";} 
}
