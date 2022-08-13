#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>


int main()
{
    std::string cowphabet, bessie;
    int count = 0;
    int bessie_index = 0;
    std::cin >> cowphabet >> bessie;

    for (int i = 0; i < 26; i++){
        char curr_char = cowphabet[i];
        
        if (curr_char == bessie[bessie_index]){
            bessie_index += 1;

            if (bessie_index >= bessie.size()){
                break;
            }
        }

        if (i == 25){
            i = 0;
            count += 1;
        }


    }

    std::cout << count + 1;


}
