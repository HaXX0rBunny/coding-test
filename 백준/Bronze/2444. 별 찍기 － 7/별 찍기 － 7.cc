#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N,M;
	cin >> N;
	M = N;

	for (int i = 0; i <N; i++)
	{
		for (int j = M-1;j>0 ; j--)
		{
			cout << " ";
		}
		for (int j = 0;j< ((i+1)*2)-1 ; j++)
		{
			cout << "*";
		}
		cout << "\n";
		M--;
	}
	
	M = N - 1;
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << " ";
		}
		for (int j = (M * 2) - 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << "\n";
		M--;
	}

}