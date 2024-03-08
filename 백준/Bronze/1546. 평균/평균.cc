#include <iostream>

int main(void)
{
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int N, MAX = 0, temp[1000] = { 0 };
    double res = 0;
    std::cin >> N ;
    for (int i = 0; i < N; i++) {
        std::cin >> temp[i];
        if (MAX < temp[i])
            MAX = temp[i];
    }
    for (int i = 0; i < N; i++) {
        res += (double(temp[i])/double(MAX))*100;
    
    }
    std::cout << res / N << "\n";
    return 0;
}