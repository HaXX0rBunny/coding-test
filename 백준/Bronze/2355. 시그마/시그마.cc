#include <iostream>
using namespace std;
long long A, B, sum = 0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> A >> B;
	if (A <= B)
		sum= ((B + A) * (B + 1 - A) / 2);
	else
		sum = ((A+B)*(A+1-B))/2;
	cout << sum;
}