#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x;
    int y[100] = { 0 };
    int z[100] = { 0 };
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> y[i] >> z[i];
        ;
    }
    for (int i =0; i < x; i++)
    {
        cout << "Case #"<<i+1<<": "<<y[i]<<" + "<<z[i]<< " = " << y[i] + z[i] << "\n";
    }
}