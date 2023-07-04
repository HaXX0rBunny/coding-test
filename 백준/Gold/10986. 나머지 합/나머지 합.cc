#include <iostream>
using namespace std;
int M, N;
long long arr[1001] = {};
long long cnt = 0, num, sum = 0;
int main() {
	int M=0,N=0;
	long long arr[1001] = {};
	long long cnt=0, num ,sum=0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		sum += num;
		arr[sum % M]++;
	}
	cnt += arr[0];
	for (int i = 0; i < M; i++) {
		if (arr[i] > 1)
			cnt += arr[i] * (arr[i] - 1) / 2;
		else
			continue;
	}
	cout << cnt;

	return 0;
}