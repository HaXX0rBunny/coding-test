#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

int main() {
    int cnt; 
    std::cin >> cnt;
    std::vector<int> num(cnt);
    std::vector<int> freq(8001, 0);
    double sum = 0;

    for (int i = 0; i < cnt; i++) {
        std::cin >> num[i];
        sum += num[i];
        freq[num[i] + 4000]++; 
    }

    std::cout << int(std::round(sum / cnt)) << std::endl;

    std::sort(num.begin(), num.end());
    std::cout << num[cnt/2] << std::endl;

    int max_freq = 0;
    for(int i = 0; i < 8001; i++) {
        max_freq = std::max(max_freq, freq[i]);
    }
    
    int mode = 0;
    bool isSecond = false;
    for(int i = 0; i < 8001; i++) {
        if(freq[i] == max_freq) {
            if(!isSecond) {
                mode = i - 4000;  
                isSecond = true;
            } else {
                mode = i - 4000;
                break;
            }
        }
    }
    std::cout << mode << std::endl;

    std::cout << num.back() - num.front() << std::endl;
    
    return 0;
}
