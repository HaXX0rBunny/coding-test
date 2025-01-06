#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
    size_t cnt;
    std::cin>> cnt;
    std::vector<int> num;
    num.resize(cnt);
    
    for(size_t i = 0 ; i < cnt ; i++)
    {
        std::cin >> num[i];
    }
    
    int res;
   sort(num.begin(), num.end());  
    res = num[0] * num[cnt-1];     
    std::cout << res;   
    
    return 0;
    
}