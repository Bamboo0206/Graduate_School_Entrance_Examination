/*给定 n 个整数 a1, a2, ..., an 和⼀个 d，你需要选出若⼲个整数，使得将这些整数从⼩到⼤排好序之
后，任意两个相邻的数之差都不⼩于给定的 d，问最多能选 多少个数 出来。*/
/* 输入样例1
6 2
1 4 2 8 5 7
输入样例2
8 2
1 3 4 5 6 7 8 9
输入样例3
8 3
1 3 4 5 6 7 8 9
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	int cnt = 1;
	int pre = A[0];
	for (int i = 1; i < n; i++)
	{
		if (A[i] - pre >= d)
		{
			cnt++;
			pre = A[i];
		}
	}
	cout << cnt;
	return 0;
}