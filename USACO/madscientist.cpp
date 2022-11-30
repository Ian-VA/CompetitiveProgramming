#include <string>
#include <iostream>

int main() {
    int ans = 0;
    int n; 
    std::string current, desired;
    
    for (int i = 0; i < n; i++){
        char curr; std::cin >> curr;
        desired.push_back(curr);
    }
    
    for (int i = 0; i < n; i++){
        char curr; std::cin >> curr;
        current.push_back(curr);
    }
    

    
    for (int i = 0; i < n; i++) {
        char curr_desired = desired[i]; char curr_current = current[i];
        
        if (curr_desired != curr_current){
            while (curr_desired != curr_current) 
            {
                i++;
            }
            ans++;
        }

    }
    
    std::cout << ans << "\n";
    
}
