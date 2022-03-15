//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int sum[10];
//	int a[10], b[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = i;
//		for (int j = 0; j < 10; j++)
//		{
//			b[i][j] = i + j;
//		}
//	}
//	//平凡算法
//// 逐列访问矩阵元素：一步外层循环（内存循环一次完整执行）计算出一个内积结果
//	for (int i = 0; i < 10; i++)
//		sum[i] = 0.0;
//	for (int j = 0; j < 10; j++)
//		for (int i = 0; i < 10; i++)
//			sum[i] += b[j][i] * a[j];
//	for (int i = 0; i < 10; i++)
//	{
//		cout << sum[i] << endl;
//	}
//	return 0;
//}
