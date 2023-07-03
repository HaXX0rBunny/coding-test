#include <iostream>
using namespace std;
int arr[251][251]={};
void flc(int i, int j) 
{
	arr[i][j] = 0;
	if(arr[i][j+1]==1)
		flc(i, j+1);
	if (arr[i+1][j] == 1)
		flc(i+1, j);
	if (arr[i+1][j+1] == 1)
		flc(i+1, j+1);
	if(i!=0){
		if (arr[i - 1][j] == 1)
			flc(i-1, j);
		if (arr[i - 1][j + 1] == 1)
			flc(i-1, j+1);
		if (j != 0) 
			if (arr[i - 1][j - 1] == 1)
				flc(i-1, j-1);
	}
	if (j != 0) {
		if (arr[i][j - 1] == 1)
			flc(i, j-1);
		if (arr[i + 1][j - 1] == 1)
			flc(i+1, j-1);
	}
}
int main() {
	int cnt = 0;
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> arr[i][j];
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			if (arr[i][j] == 1) {
				flc(i, j);
				cnt++;
			}
	cout << cnt;
}