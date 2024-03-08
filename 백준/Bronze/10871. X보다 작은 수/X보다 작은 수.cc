#include <iostream>
using namespace std;

int main()
{
    int num, s, r, c = 0;
    int x[10000] = { 0 };
    cin >> num >> s;
    for (int i = 0; i < num; i++)
    {
        cin >> r;
        if (r < s)
        {
            x[c] = r;
            c++;
        }
    }
    for (int i = 0; i <c; i++)
        cout << x[i]<< " ";
    cout << "\n";
}