#include <iostream>
using namespace std;

int main(void)
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N, M, i, j, res[101] = {0},temp;
    cin >> N >> M;
    for (int x = 0; x < N; x++)
    {
        res[x] = x+1;

    }
    for (int x = 0; x < M; x++) {
        cin >> i >> j;
        temp = res[i-1];
        res[i-1] = res[j-1];
        res[j-1] = temp;
        
    }
    for (int x = 0; x < N; x++) {
        cout << res[x]<<" ";
    }
    cout << "\n";
}