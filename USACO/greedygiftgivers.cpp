#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
ID: Ian Atroshchenko [birb]
TASK: gift1
LANG: C++                 
*/

int main()
{
    int num_friends = 0;
    std::ifstream fin ("gift1.in");
    std::ofstream fout ("gift1.out");
    fin >> num_friends;
    int moneys[num_friends];
    std::string names[num_friends];

    for (int i = 0; i < num_friends; i++){
        fin >> names[i];
    }
    
    for (int i = 0; i < num_friends; i++){
        moneys[i] = 0;
    }

    for (int i = 0; i < num_friends; i++)
    {
        std::string giver; 
        fin >> giver;
        int moneygiven; 
        fin >> moneygiven;
        int numofpeople; 
        fin >> numofpeople;

        if (moneygiven == 0 && numofpeople == 0){
            continue;
        }

        int remainder = moneygiven % numofpeople;
        int moneyperperson = moneygiven / numofpeople;

        for (int j = 0; j < numofpeople; j++){
            std::string current_reciever; fin >> current_reciever;
            for (int h = 0; h < num_friends; h++){
                if (current_reciever == names[h]){
                    moneys[h] += moneyperperson;
                }
            }
        }

        for (int j = 0; j < num_friends; j++){
            if (names[j] == giver){
                moneys[j] =- moneygiven;
                moneys[j] += remainder;
            }
        }
    }
    
    for (int i = 0; i < num_friends; i++){
        fout << names[i] << " " << moneys[i] << "\n";
    }


}
