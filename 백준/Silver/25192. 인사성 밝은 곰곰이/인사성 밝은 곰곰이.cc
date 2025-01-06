#include <iostream>
#include <string>
#include <vector>
#include <set>

int main() {
    size_t cnt;
    std::cin >> cnt;
    std::string input;
    std::set<std::string> users;  
    int res = 0;
    
    for(size_t i = 0; i < cnt; i++) {
        std::cin >> input;
        if(input == "ENTER") {
            users.clear();  
        } else {
            if(users.find(input) == users.end()) { 
                res++;  
                users.insert(input); 
            }
        }
    }
    
    std::cout << res;
    return 0;
}