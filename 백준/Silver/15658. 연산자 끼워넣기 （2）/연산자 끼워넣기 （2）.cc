#include <iostream>
using namespace std;
int x;
int arr[11];
int Op[4];
int max_res = -1000000001;
int min_res = 1000000001;
void Op_insert(int cnt, int num) {
	if (cnt + 1 == x) {
		if (num > max_res)
			max_res = num;
		if (num < min_res)
			min_res = num;
		return;
	}
	if (Op[0] > 0) {
		Op[0]--;
		Op_insert(cnt + 1, num + arr[cnt + 1]);
		Op[0]++;
	}
	if (Op[1] > 0) {
		Op[1] -= 1;
		Op_insert(cnt + 1, num - arr[cnt + 1]);
		Op[1]++;
	}
	if (Op[2] > 0) {
		Op[2] -= 1;
		Op_insert(cnt + 1, num * arr[cnt + 1]);
		Op[2]++;
	}
	if (Op[3] > 0 && arr[cnt + 1] != 0) {
		Op[3] -= 1;
		Op_insert(cnt + 1, num / arr[cnt + 1]);
		Op[3]++;
	}
	
}

int main()
{

	cin >> x;
	for (int i = 0; i < x; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> Op[i];//+-*/
	Op_insert(0,arr[0]);
	cout << max_res << "\n" << min_res ;
}
