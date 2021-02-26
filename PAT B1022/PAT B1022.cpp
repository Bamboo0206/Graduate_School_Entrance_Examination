#include<iostream>
using namespace std;

int fun(int C, int D);

int main()
{
	int A, B, D;
	cin >> A >> B >> D;
	int C = A + B;
	fun(C, D);
	return 0;
}

int fun(int C, int D)
{
	if (C < D)
	{
		cout << C % D;
		return 0;
	}
	fun(C / D, D);
	cout << C % D;
	return 0;
}