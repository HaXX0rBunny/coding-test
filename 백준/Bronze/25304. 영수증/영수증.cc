#include <iostream>
using namespace std;

int main()
{
    int x, y, a, b, temp = 0; ;
    cin >> x;
    cin >> y;
    for (int i=0; i < y; i++){
        cin >> a >> b;
        temp += (a * b);
    }
    if (x == temp)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}