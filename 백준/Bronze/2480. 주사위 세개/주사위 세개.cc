#include <iostream>
using namespace std;

int main()
{
    int A, B, C, S;
    cin >> A >> B >> C;
    S = A;
    if (B > S)
        S = B;
    if (C>S)
        S = C;
    if (A == B && B == C)
        cout << 10000 + A * 1000 << endl;
    else if (A == B || A == C)
        cout << 1000 + A * 100 << endl;
    else if (B == C)
        cout << 1000 + B * 100 << endl;
    else
        cout << S * 100 << endl;

    return 0;
}