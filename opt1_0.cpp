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
//	//ƽ���㷨
//// ���з��ʾ���Ԫ�أ�һ�����ѭ�����ڴ�ѭ��һ������ִ�У������һ���ڻ����
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
