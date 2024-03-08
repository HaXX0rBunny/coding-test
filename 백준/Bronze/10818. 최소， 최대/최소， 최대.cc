#include <iostream>
using namespace std;

int main()
{
    int c, max=-1000000, min=1000000, num=0;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> num;
        if (max< num) {
            max = num;
        }
        if (min > num) {
            min = num;
        }
    }
    cout << min << " " << max << "\n";
}