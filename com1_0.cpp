#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	const int n = 10;
	int sum[n];
	int a[n], b[n][n];
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
		sum[i] = 0.0;
		for (int j = 0; j < n; j++)
		{
			b[i][j] = i + j;
		}
	}
	long long head, tail, freq;
	QueryPerformanceFrequency((LARGE_INTEGER *) & freq);
	QueryPerformanceCounter((LARGE_INTEGER *) & head);
	for (int i = 0; i < n; i++) {
		sum[i] = 0.0;
		for (int j = 0; j < n; j++)
			sum[i] += b[j][i] * a[j];
	}
	QueryPerformanceCounter((LARGE_INTEGER *) & tail);
	cout << "Time:" << (tail - head) * 1000.0 / freq<< "ms" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}
