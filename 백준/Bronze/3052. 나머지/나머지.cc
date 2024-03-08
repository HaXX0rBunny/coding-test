#include <iostream>
using namespace std;

int main(void)
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int res[43] = {0};

    int x,c=0;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        res[x%42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (res[i] != 0)
            c++;
    }
    cout << c << "\n";
}