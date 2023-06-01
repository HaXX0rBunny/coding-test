#include <iostream>
using namespace std;

int DP[11];
int saving(int input, int period)
{
    DP[0] = input;
    for (int i = 1; i <= period; i++) {
        DP[i] = (int)(DP[i - 1] * 1.05);
        if (i >= 3) {
            if((DP[i - 3] * 1.2)>= DP[i])
                DP[i] = max(DP[i], (int)(DP[i - 3] * 1.2));
        }
        if (i >= 5) {
            if ((DP[i - 5] * 1.35) >= DP[i])
            DP[i] = max(DP[i], (int)(DP[i - 5] * 1.35));
        }
    }
    return DP[period];
}
int main() {
	int deposit = 0;
	int period = 0;
	cin >> deposit >> period;
	cout << saving(deposit, period);
	return 0;
}
