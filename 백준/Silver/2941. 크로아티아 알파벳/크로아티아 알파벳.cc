#include <iostream>
#include <string>
#include <algorithm>


int main() {
    std::string str;
    int ap[27] = { 0 };
    int max = 0, flag = 0, m_flag;
    std::cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-')
            flag--;
        if (str[i] == '=')
        {
            flag--;
            if (str[i - 1] == 'z')
                if (str[i - 2] == 'd')
                    flag--;
        }
        if (str[i] == 'j')
            if (str[i - 1] == 'l' || str[i - 1] == 'n')
                flag--;
        flag++;
    }
    std::cout << flag << '\n';
    return 0;
}