#include <iostream>
using namespace std;
int a[16], sum = 0, sum1 = 0, sum2 = 0;
int func(int n)
{
	if (n == 1)
		return a[0];
	else
	{
		for (int i = 0; i < n / 2; i++)
			a[i] += a[n - i - 1];
		n = n / 2;
		func(n);
	}
}
		
int main()
{
	int a[10], sum = 0, sum1 = 0, sum2 = 0;
	for (int i = 0; i < 16; i++)
	{
		a[i] = i;
	}
	
	sum = func(16);
	cout << sum << endl;
	return 0;
}
