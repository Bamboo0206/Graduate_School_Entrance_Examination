/*给定五个 0~9 范围内的整数 a1, a2, a3, a4, a5。如果能从五个整数中选出三个并且这三个整数的和为
10 的倍数（包括 0），那么这五个整数的权值 即为 “剩下两个没被选出来的整数的和，对 10 取余的结果”
，显然如果有多个三元组满⾜和是 10 的倍数，剩下两个数之和对 10 取余的结果都是相同的；如果
选不出这样三个整数，则这五个整数的权值为 -1。
现在给定 T 组数据，每组数据包含五个 0~9 范围内的整数，分别求这 T 组数据中五个整数的权值。*/
/*
4
1 0 0 1 0
1 0 0 8 6
3 4 5 6 7
4 5 6 7 8
*/

#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int *A;
	A = new int[5];
	int flag = 0;
	for (int i = 0; i < T; i++)//T组
	{
		flag = 0;
		for (int j = 0; j < 5; j++)//读入1组
		{
			cin >> A[j];
		}
		//选出三个数的组合
		for (int m = 0; m < 3&&flag==0; m++)
		{
			for (int n = m + 1; n < 4 && flag == 0; n++)
			{
				for (int p = n + 1; p < 5 && flag == 0; p++)
				{
					if ((A[m] + A[n] + A[p]) % 10 == 0)
					{
						int sum = 0;
						for (int q = 0; q < 5; q++)
						{
							if (q == m || q == n || q == p)
								continue;
							sum += A[q];
						}

						cout << sum % 10 << endl;
						flag = 1;
					}
				}
			}
		}
		if (flag == 0)
		{
			cout << "-1" << endl;
		}
	}
	delete[] A;
	return 0;
}