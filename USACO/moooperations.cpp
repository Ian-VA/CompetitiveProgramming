#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


void solve()
{
    std::string a; std::cin >> a;
    int moves = 0;
    std::size_t findmom = a.find("MOM");
    std::size_t findooo = a.find("OOO");
    std::size_t findoom = a.find("OOM");
    std::size_t findmoo = a.find("MOO");

    if (a == "MOO") {
        std::cout << "0" << "\n";
    } else if (a == "OOO"){
        std::cout << "1" << "\n";
    } else if (a == "OOM") {
        std::cout << "2" << "\n";
    } else if (findmom == std::string::npos && findooo == std::string::npos && findoom == std::string::npos && a != "MOO" && findmoo == std::string::npos){
        std::cout << "-1" << "\n";
    } else if (a.length() <= 3 && a != "MOM") {
        std::cout << "-1" << "\n";
    } else {
        if (findmoo != std::string::npos)
        {
            if (findmoo != 0) {
                do
                {
                    a.erase(0, 1);
                    moves++;
                } while (a.rfind("MOO", 0) != 0);
                
            }

            while (a != "MOO")
            {
                a.erase(a.size()-1, 1);
                moves++;
            } 
            std::cout << moves << "\n";
        } else if (findmom != std::string::npos) {
            if (findmom != 0) {
                do
                {
                    a.erase(0, 1);
                    moves++;
                } while (a.rfind("MOM", 0) != 0);
                
            }

            while (a != "MOM")
            {
                a.erase(a.size()-1, 1);
                moves++;
            } 
            moves += 1;
            std::cout << moves << "\n";
        } else if (findooo != std::string::npos){
            if (findooo != 0) {
                do
                {
                    a.erase(0, 1);
                    moves++;
                } while (a.rfind("OOO", 0) != 0);
                
            }

            while (a != "OOO")
            {
                a.erase(a.size()-1, 1);
                moves++;
            } 
            moves += 1;
            std::cout << moves << "\n";

        } else if (findoom != std::string::npos) {
            if (findoom != 0) {
                do
                {
                    a.erase(0, 1);
                    moves++;
                } while (a.rfind("OOM", 0) != 0);
                
            }

            while (a != "OOM")
            {
                a.erase(a.size()-1, 1);
                moves++;
            }

            moves = moves + 2;
            std::cout << moves << "\n";

        }

    }

}

int main()
{
    int n; std::cin >> n;

    while(n--){
        solve();
    }
}
