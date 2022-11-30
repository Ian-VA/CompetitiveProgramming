#include <iostream>
#include <vector>
#include <string>

int main() {
    int n; std::cin >> n;
    std::pair<char, int> cows[n];
    int liars = 0;
    
    for (int i = 0; i < n; i++) {
        std::pair<char, int> cow;
        char gl; int numberline; std::cin >> gl >> numberline;
        cow.first = gl; cow.second = numberline;
        cows[i]= cow;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            std::pair<char, int>curr_cow = cows[i]; std::pair<char, int>iterable_cow = cows[j];
            
            switch(curr_cow.first)
            {
                case 'G':
                    switch (iterable_cow.first)
                    {
                        case 'L': 
                            if ((iterable_cow.second - curr_cow.second) < 0){
                                liars =+ 1;
                            }
                            break;
                    }
                case 'L':
                    switch(iterable_cow.first)
                    {
                        case 'G':
                            if ((curr_cow.second - iterable_cow.second) < 0){
                                liars += 1;
                            }
                            break;
                    }
            }
        }
    }
    
    std::cout << liars;
}
