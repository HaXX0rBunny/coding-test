#include <iostream>
using namespace std;

int main(void)
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N, M, i, j, k, res[101] = {0};
    cin >> N >> M;
    for (int x = 0; x < M; x++)
    {
        cin >> i >> j >> k;
        for (int y = i - 1; y < j; y++)
            res[y] = k;
    }
    for (int x = 0; x < N; x++)
        cout << res[x] << " ";

    cout << "\n";
}