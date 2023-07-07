#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <list>
#include <deque>
#include <fstream>

typedef long long ll;
typedef long int lint;

bool check(std::deque<int> v) {
    for (int i = 1; i < v.size(); i++){
        if (v[i-1] != v[i]){
            return false;
        }
    }
    return true;
}


bool beautiful(std::deque<int> a, int n){
    int sum = 0;
    sum += a[0];
    bool ok = true;
    for (int i = 1; i < n+1; i++) {
        if (sum == a[i]) {ok = false; break;} else {
            sum += a[i];
        }
    }

    return ok;
}

void solve()
{
    int n; std::cin >> n; std::deque<int> arr;

    for (int i = 0; i < n; i++) {
        int a; std::cin >> a; arr.push_back(a);
    }

    if ( std::adjacent_find(arr.begin(), arr.end(), std::not_equal_to<>() ) == arr.end() )
    {
        std::cout << "NO" << "\n";
    } else {
        if (beautiful(arr, n)) {
            std::cout << "YES" << "\n";

            for (int i = 0; i < n; i++) {
                std::cout << arr[i] << " ";
            }

            std::cout << "\n";
        } else {
            std::sort(arr.begin(), arr.end(), std::greater<>());

            while (true){
                if (beautiful(arr, n)) {break;}
                arr.push_back(arr[0]);
                arr.pop_front();
            }

            if (beautiful(arr, n)){
                std::cout << "YES" << "\n";
                for (int i = 0; i < n; i++) {
                    std::cout << arr[i] << " ";
                }

                std::cout << "\n";
            }
        }
    }


}
int main(){
    int t; std::cin >> t;

    while (t--)
    {
        solve();
    }
}
