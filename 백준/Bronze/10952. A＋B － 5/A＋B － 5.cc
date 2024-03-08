#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int sum[100] = { 0 };

    for (int i = 0;; i++)
    {
        cin >> a >> b;
        sum[i] = a + b;
        if (sum[i] == 0)
            break;
    }
    for (int i = 0;; i++)
    {
        if (sum[i] == 0)
            break;
        cout << sum[i] << endl;
    }
}